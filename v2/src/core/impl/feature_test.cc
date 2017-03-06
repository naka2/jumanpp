//
// Created by Arseny Tolmachev on 2017/03/06.
//

#include "testing/test_analyzer.h"

using namespace jumanpp::core::analysis;
using namespace jumanpp::core::spec;
using namespace jumanpp::core::dic;
using namespace jumanpp::testing;
using namespace jumanpp;

namespace {

struct FeatureSet {
  dsl::FieldBuilder& a;
  dsl::FieldBuilder& b;
  dsl::FieldBuilder& c;
  dsl::FeatureBuilder& ph;
};

struct Node {
  std::string surface;
  EntryPtr eptr = EntryPtr::EOS();
  std::vector<i32> entries;
  std::vector<u64> primitve;
  std::vector<u64> pattern;
};

class PrimFeatureTestEnv {
  TestEnv tenv;
  StringField flda;
  StringField fldb;
  StringListField fldc;

  util::FlatMap<StringPiece, i32> a2idx;

 public:
  static void noop(...) {}

  template <typename Fn>
  PrimFeatureTestEnv(StringPiece csvData, Fn fn) {
    tenv.spec([fn](dsl::ModelSpecBuilder& specBldr) {
      auto& a = specBldr.field(1, "a").strings().trieIndex();
      auto& b = specBldr.field(2, "b").strings();
      auto& c = specBldr.field(3, "c").stringLists();
      auto& ph = specBldr.feature("ph").placeholder();
      specBldr.unk("chars", 1)
          .chunking(chars::CharacterClass::KATAKANA)
          .notPrefixOfDicFeature(ph)
          .outputTo({a});
      FeatureSet fs{a, b, c, ph};
      fn(specBldr, fs);
      specBldr.unigram({a, b});
    });
    CHECK(tenv.saveLoad.unkCreators.size() == 1);
    tenv.importDic(csvData);
    REQUIRE_OK(tenv.analyzer->output().stringField("a", &flda));
    REQUIRE_OK(tenv.analyzer->output().stringField("b", &fldb));
    REQUIRE_OK(tenv.analyzer->output().stringListField("c", &fldc));

    auto sa = tenv.dicBuilder.result().fieldData[0].stringContent;
    dic::impl::StringStorageTraversal sst{sa};
    StringPiece sp;
    while (sst.next(&sp)) {
      a2idx[sp] = sst.position();
    }

  }

  void analyze(StringPiece str) {
    CAPTURE(str);
    CHECK_OK(tenv.analyzer->resetForInput(str));
    CHECK_OK(tenv.analyzer->makeNodeSeedsFromDic());
    CHECK_OK(tenv.analyzer->buildLattice());
  }

  size_t numNodeSeeds() const {
    return tenv.analyzer->latticeBuilder().seeds().size();
  }

  Node uniqueNode(StringPiece surface, i32 position) {
    CAPTURE(surface);
    CAPTURE(position);
    auto& l = tenv.analyzer->lattice();
    auto b = l.boundary(position + 2);
    auto starts = b->starts();
    auto& output = tenv.analyzer->output();
    auto walker = output.nodeWalker();
    EntryPtr x = EntryPtr::EOS();
    i32 pos = 0;
    i32 i = 0;
    for (auto &eptr: starts->entryPtrData()) {
      REQUIRE(output.locate(eptr, &walker));
      auto cont = flda[walker];
      if (cont == surface) {
        if (x != EntryPtr::EOS()) {
          FAIL("found second node with surface " << surface);
        }
        x = eptr;
        pos = i;
      }
      ++i;
    }
    if (x == EntryPtr::EOS()) {
      FAIL("could not find a node");
    }

    Node n;
    n.surface = surface.str();
    n.eptr = x;
    util::copy_insert(starts->entryData().row(pos), n.entries);
    util::copy_insert(starts->primitiveFeatureData().row(pos), n.primitve);
    util::copy_insert(starts->patternFeatureData().row(pos), n.pattern);
    return n;
  }


  i32 idxa(StringPiece data) {
    auto it = a2idx.find(data);
    if (it == a2idx.end()) {
      return -5000;
    }
    return it->second;
  }

  util::ArraySlice<u64> prim(i32 start, i32 node) {
    CAPTURE(start);
    auto bnd = tenv.analyzer->lattice().boundary(start + 2);
    auto pBoundary = bnd->starts();
    REQUIRE(pBoundary->arraySize() > 0);
    return pBoundary->primitiveFeatureData().row(node);
  }

  const spec::AnalysisSpec& spec() const {
    return tenv.dicBuilder.spec();
  }

  void printAll() {
    auto& output = tenv.analyzer->output();
    auto walker = output.nodeWalker();
    auto seeds = tenv.analyzer->latticeBuilder().seeds();

    for (auto& seed : seeds) {
      CHECK(output.locate(seed.entryPtr, &walker));
      while (walker.next()) {
        WARN("NODE:" << flda[walker] << "||" << fldb[walker]);
      }
    }
  }

  ~PrimFeatureTestEnv() {
    if (!Catch::getResultCapture().getLastResult()->isOk()) {
      printAll();
    }
  }
};
}

TEST_CASE("primitive features are computed") {
  StringPiece dic = "XXX,z,KANA\na,b,\nb,c,\n";
  PrimFeatureTestEnv env{dic, [](dsl::ModelSpecBuilder& specBldr, FeatureSet& fs){}};
  env.analyze("ab");
  auto p = env.uniqueNode("a", 0);
  CHECK(p.primitve[0] == env.idxa("a"));
  auto p2 = env.prim(1, 0);
  CHECK(p2[0] == env.idxa("b"));
  CHECK(p.primitve[0] != p2[0]);
}

TEST_CASE("not prefix feature works") {
  StringPiece dic = "XXX,z,KANA\nカラ,b,\nb,c,\n";
  PrimFeatureTestEnv env{dic, [](dsl::ModelSpecBuilder& specBldr, FeatureSet& fs){}};
  env.analyze("カラフ");
  auto p1 = env.uniqueNode("カラ", 0);
  CHECK(p1.eptr.isDic());
  CHECK(p1.primitve[0] == env.idxa("カラ"));
  CHECK(p1.primitve.size() == 3);
  CHECK(p1.primitve[2] == 0);
  auto p2 = env.uniqueNode("カ", 0);
  CHECK(p2.eptr.isSpecial());
  CHECK(p2.entries[2] != 0);
  CHECK(p2.primitve[2] == 0);
  auto p3 = env.uniqueNode("カラフ", 0);
  CHECK(p3.eptr.isSpecial());
  CHECK(p3.primitve[2] == 1);
}

TEST_CASE("match string feature works") {
  StringPiece dic = "XXX,z,KANA\nカラ,b,\nb,c,\n";
  PrimFeatureTestEnv env{dic, [](dsl::ModelSpecBuilder& specBldr, FeatureSet& fs){
    specBldr.feature("mtch").matchValue(fs.b, "b");
  }};
  REQUIRE(env.spec().features.primitive[3].name == "mtch");
  env.analyze("カラフ");
  auto p1 = env.uniqueNode("カラ", 0);
  CHECK(p1.primitve.size() == 4);
  CHECK(p1.primitve[3] == 1);
  auto p2 = env.uniqueNode("カ", 0);
  CHECK(p2.primitve.size() == 4);
  CHECK(p2.primitve[3] == 0);
}

TEST_CASE("match list feature works") {
  StringPiece dic = "XXX,z,KANA\nカラ,b,\nb,c,\n";
  PrimFeatureTestEnv env{dic, [](dsl::ModelSpecBuilder& specBldr, FeatureSet& fs){
    specBldr.feature("mtch").matchValue(fs.c, "KANA");
  }};
  REQUIRE(env.spec().features.primitive[3].name == "mtch");
  env.analyze("カラフ");
  auto p1 = env.uniqueNode("カラ", 0);
  CHECK(p1.primitve.size() == 4);
  CHECK(p1.primitve[3] == 0);
  auto p2 = env.uniqueNode("カ", 0);
  CHECK(p2.primitve.size() == 4);
  CHECK(p2.primitve[3] == 1);
}

TEST_CASE("match list feature works with several entries") {
  StringPiece dic = "XXX,z,XANA DATA\nカラ,b,XAS BAR KANA\nラ,c,A B KANA\n";
  PrimFeatureTestEnv env{dic, [](dsl::ModelSpecBuilder& specBldr, FeatureSet& fs){
    specBldr.feature("mtch").matchValue(fs.c, "KANA");
  }};
  REQUIRE(env.spec().features.primitive[3].name == "mtch");
  env.analyze("カラフ");
  auto p1 = env.uniqueNode("カラ", 0);
  CHECK(p1.primitve.size() == 4);
  CHECK(p1.primitve[3] == 1);
  auto p2 = env.uniqueNode("カ", 0);
  CHECK(p2.primitve.size() == 4);
  CHECK(p2.primitve[3] == 0);
  auto p3 = env.uniqueNode("ラ", 1);
  CHECK(p3.primitve.size() == 4);
  CHECK(p3.primitve[3] == 1);
  auto p4 = env.uniqueNode("ラフ", 1);
  CHECK(p4.primitve.size() == 4);
  CHECK(p4.primitve[3] == 0);
}