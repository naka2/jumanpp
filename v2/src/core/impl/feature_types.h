//
// Created by Arseny Tolmachev on 2017/02/27.
//

#ifndef JUMANPP_FEATURE_TYPES_H
#define JUMANPP_FEATURE_TYPES_H

#include "util/array_slice.h"
#include "util/status.hpp"
#include "util/string_piece.h"
#include "util/types.hpp"

namespace jumanpp {
namespace core {
namespace features {

enum class PrimitiveFeatureKind { Copy, MatchDic, MatchAnyDic, Provided };

struct PrimitiveFeature {
  StringPiece name;
  i32 index = -1;
  PrimitiveFeatureKind kind;
  util::ArraySlice<i32> references;
  util::ArraySlice<i32> matchData;
};

}  // features
}  // core
}  // jumanpp

#endif  // JUMANPP_FEATURE_TYPES_H