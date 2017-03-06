//
// Created by Arseny Tolmachev on 2017/03/03.
//

#include "analyzer_impl.h"
#include "core/analysis/unk_nodes_creator.h"
#include "core/impl/feature_impl_types.h"
#include "dictionary_node_creator.h"

namespace jumanpp {
namespace core {
namespace analysis {

Status AnalyzerImpl::resetForInput(StringPiece input) {
  reset();
  JPP_RETURN_IF_ERROR(input_.reset(input));
  latticeBldr_.reset(input_.numCodepoints());

  return Status::Ok();
}

AnalyzerImpl::AnalyzerImpl(const CoreHolder* core, const AnalyzerConfig& cfg)
    : cfg_{cfg},
      core_{core},
      memMgr_{cfg.pageSize},
      alloc_{memMgr_.core()},
      input_{cfg.maxInputBytes},
      lattice_{alloc_.get(), core->latticeConfig()},
      xtra_{alloc_.get(), core->dic().entries().entrySize(),
            core->runtime().unkMakers.numPlaceholders},
      outputManager_{alloc_.get(), &xtra_, &core->dic(), &lattice_} {}

Status AnalyzerImpl::makeNodeSeedsFromDic() {
  DictionaryNodeCreator dnc{core_->dic().entries()};
  if (!dnc.spawnNodes(input_, &latticeBldr_)) {
    return Status::InvalidState()
           << "error when creating nodes from dictionary";
  }
  return Status::Ok();
}

Status AnalyzerImpl::makeUnkNodes1() {
  auto& unk = core_->unkMakers();
  analysis::UnkNodesContext unc{&xtra_};
  for (auto& m : unk.stage1) {
    if (!m->spawnNodes(input_, &unc, &latticeBldr_)) {
      return Status::InvalidState() << "failed to create unk nodes";
    }
  }

  return Status::Ok();
}

bool AnalyzerImpl::checkLatticeConnectivity() {
  return latticeBldr_.checkConnectability();
}

Status AnalyzerImpl::makeUnkNodes2() {
  auto& unk = core_->unkMakers();
  analysis::UnkNodesContext unc{&xtra_};
  for (auto& m : unk.stage2) {
    if (!m->spawnNodes(input_, &unc, &latticeBldr_)) {
      return Status::InvalidState() << "failed to create unk nodes (2)";
    }
  }

  return Status::Ok();
}

class InNodeFeatureComputer {
  const dic::DictionaryEntries entries_;
  const ExtraNodesContext& xtra_;
  const core::features::FeatureHolder& features_;
  features::impl::PrimitiveFeatureContext pfc_;

 public:
  InNodeFeatureComputer(const dic::DictionaryHolder& dic,
                        const features::FeatureHolder& features,
                        ExtraNodesContext* xtra)
      : entries_{dic.entries()},
        xtra_{*xtra},
        features_{features},
        pfc_{xtra, dic.fields()} {}

  bool importOneEntry(EntryPtr ptr, util::MutableArraySlice<i32> result) {
    if (ptr.isSpecial()) {
      auto node = xtra_.node(ptr);
      if (node->header.type == ExtraNodeType::Unknown) {
        auto nodeData = xtra_.nodeContent(node);
        util::copy_buffer(nodeData, result);
        auto hash = node->header.unk.contentHash;
        for (auto& e : result) {
          if (e < 0) {
            e = hash;
          }
        }
      } else {
        return false;
      }
    } else {  // dic node
      entries_.entryAtPtr(ptr.dicPtr()).fill(result, result.size());
    }
    return true;
  }

  Status importEntryData(LatticeBoundary* lb) {
    auto ptrs = lb->starts()->entryPtrData();
    auto entries = lb->starts()->entryData();
    for (int i = 0; i < ptrs.size(); ++i) {
      if (!importOneEntry(ptrs[i], entries.row(i))) {
        return Status::InvalidState()
               << "failed to import entry data into lattice";
      }
    }
    return Status::Ok();
  }

  void applyPrimitiveFeatures(LatticeBoundary* lb) {
    auto nodes = lb->starts();
    auto ptrs = nodes->entryPtrData();
    auto entries = nodes->entryData();
    auto primFeature = nodes->primitiveFeatureData();
    features::impl::PrimitiveFeatureData pfd{ptrs.data(), entries, primFeature};
    features_.primitive->applyBatch(&pfc_, &pfd);
  }

  void applyComputeFeatures(LatticeBoundary* lb) {
    auto nodes = lb->starts();
    auto ptrs = nodes->entryPtrData();
    auto entries = nodes->entryData();
    auto primFeature = nodes->primitiveFeatureData();
    features::impl::PrimitiveFeatureData pfd{ptrs.data(), entries, primFeature};
    features::impl::ComputeFeatureContext cfc;
    features_.compute->applyBatch(&cfc, &pfd);
  }

  void applyPatternFeatures(LatticeBoundary* lb) {
    auto nodes = lb->starts();
    auto primFeature = nodes->primitiveFeatureData();
    auto patFeature = nodes->patternFeatureData();
    features::impl::PatternFeatureData pfd{primFeature, patFeature};
    features_.pattern->applyBatch(&pfd);
  }
};

Status AnalyzerImpl::buildLattice() {
  JPP_RETURN_IF_ERROR(makeUnkNodes1());
  if (!checkLatticeConnectivity()) {
    JPP_RETURN_IF_ERROR(makeUnkNodes2());
    if (!checkLatticeConnectivity()) {
      return Status::InvalidState() << "could not build lattice";
    }
  }

  LatticeConstructionContext lcc;
  InNodeFeatureComputer fc{core_->dic(), core_->features(), &xtra_};

  JPP_RETURN_IF_ERROR(latticeBldr_.makeBos(&lcc, &lattice_));
  JPP_DCHECK_EQ(lattice_.createdBoundaryCount(), 2);
  JPP_RETURN_IF_ERROR(latticeBldr_.prepare());
  i32 totalBnds = input_.numCodepoints();
  for (i32 boundary = 0; boundary < totalBnds; ++boundary) {
    LatticeBoundary* bnd;
    JPP_RETURN_IF_ERROR(latticeBldr_.constructSingleBoundary(&lattice_, &bnd));
    if (latticeBldr_.isAccessible(boundary)) {
      fc.importEntryData(bnd);
      fc.applyPrimitiveFeatures(bnd);
      fc.applyComputeFeatures(bnd);
      fc.applyPatternFeatures(bnd);
    }
  }

  return Status::Ok();
}

}  // analysis
}  // core
}  // jumanpp