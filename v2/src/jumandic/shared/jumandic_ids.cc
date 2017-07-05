// clang-format off
// This file is generated by /scripts/grammar_id_mapping.py
// Do not edit it manually!


#include "jumandic_ids.h"

namespace jumanpp {
namespace jumandic {
const JumandicTuple posInfo[] = {
  {StringPiece{"特殊"}, StringPiece{"句点"}, 0, 1},
  {StringPiece{"特殊"}, StringPiece{"読点"}, 0, 2},
  {StringPiece{"特殊"}, StringPiece{"括弧始"}, 0, 3},
  {StringPiece{"特殊"}, StringPiece{"括弧終"}, 0, 4},
  {StringPiece{"特殊"}, StringPiece{"記号"}, 0, 5},
  {StringPiece{"特殊"}, StringPiece{"空白"}, 0, 6},
  {StringPiece{"動詞"}, StringPiece{"*"}, 1, 0},
  {StringPiece{"形容詞"}, StringPiece{"*"}, 2, 0},
  {StringPiece{"判定詞"}, StringPiece{"*"}, 3, 0},
  {StringPiece{"助動詞"}, StringPiece{"*"}, 4, 0},
  {StringPiece{"名詞"}, StringPiece{"普通名詞"}, 5, 1},
  {StringPiece{"名詞"}, StringPiece{"サ変名詞"}, 5, 2},
  {StringPiece{"名詞"}, StringPiece{"固有名詞"}, 5, 3},
  {StringPiece{"名詞"}, StringPiece{"地名"}, 5, 4},
  {StringPiece{"名詞"}, StringPiece{"人名"}, 5, 5},
  {StringPiece{"名詞"}, StringPiece{"組織名"}, 5, 6},
  {StringPiece{"名詞"}, StringPiece{"数詞"}, 5, 7},
  {StringPiece{"名詞"}, StringPiece{"形式名詞"}, 5, 8},
  {StringPiece{"名詞"}, StringPiece{"副詞的名詞"}, 5, 9},
  {StringPiece{"名詞"}, StringPiece{"時相名詞"}, 5, 10},
  {StringPiece{"指示詞"}, StringPiece{"名詞形態指示詞"}, 6, 1},
  {StringPiece{"指示詞"}, StringPiece{"連体詞形態指示詞"}, 6, 2},
  {StringPiece{"指示詞"}, StringPiece{"副詞形態指示詞"}, 6, 3},
  {StringPiece{"副詞"}, StringPiece{"*"}, 7, 0},
  {StringPiece{"助詞"}, StringPiece{"格助詞"}, 8, 1},
  {StringPiece{"助詞"}, StringPiece{"副助詞"}, 8, 2},
  {StringPiece{"助詞"}, StringPiece{"接続助詞"}, 8, 3},
  {StringPiece{"助詞"}, StringPiece{"終助詞"}, 8, 4},
  {StringPiece{"接続詞"}, StringPiece{"*"}, 9, 0},
  {StringPiece{"連体詞"}, StringPiece{"*"}, 10, 0},
  {StringPiece{"感動詞"}, StringPiece{"*"}, 11, 0},
  {StringPiece{"接頭辞"}, StringPiece{"名詞接頭辞"}, 12, 1},
  {StringPiece{"接頭辞"}, StringPiece{"動詞接頭辞"}, 12, 2},
  {StringPiece{"接頭辞"}, StringPiece{"イ形容詞接頭辞"}, 12, 3},
  {StringPiece{"接頭辞"}, StringPiece{"ナ形容詞接頭辞"}, 12, 4},
  {StringPiece{"接尾辞"}, StringPiece{"名詞性述語接尾辞"}, 13, 1},
  {StringPiece{"接尾辞"}, StringPiece{"名詞性名詞接尾辞"}, 13, 2},
  {StringPiece{"接尾辞"}, StringPiece{"名詞性名詞助数辞"}, 13, 3},
  {StringPiece{"接尾辞"}, StringPiece{"名詞性特殊接尾辞"}, 13, 4},
  {StringPiece{"接尾辞"}, StringPiece{"形容詞性述語接尾辞"}, 13, 5},
  {StringPiece{"接尾辞"}, StringPiece{"形容詞性名詞接尾辞"}, 13, 6},
  {StringPiece{"接尾辞"}, StringPiece{"動詞性接尾辞"}, 13, 7},
  {StringPiece{"未定義語"}, StringPiece{"その他"}, 14, 1},
  {StringPiece{"未定義語"}, StringPiece{"カタカナ"}, 14, 2},
  {StringPiece{"未定義語"}, StringPiece{"アルファベット"}, 14, 3},
};

const u32 posInfoCount = 45U;

const JumandicTuple conjInfo[] = {
  {StringPiece{"母音動詞"}, StringPiece{"語幹"}, 0, 1},
  {StringPiece{"母音動詞"}, StringPiece{"基本形"}, 0, 2},
  {StringPiece{"母音動詞"}, StringPiece{"未然形"}, 0, 3},
  {StringPiece{"母音動詞"}, StringPiece{"意志形"}, 0, 4},
  {StringPiece{"母音動詞"}, StringPiece{"省略意志形"}, 0, 5},
  {StringPiece{"母音動詞"}, StringPiece{"命令形"}, 0, 6},
  {StringPiece{"母音動詞"}, StringPiece{"基本条件形"}, 0, 7},
  {StringPiece{"母音動詞"}, StringPiece{"基本連用形"}, 0, 8},
  {StringPiece{"母音動詞"}, StringPiece{"タ接連用形"}, 0, 9},
  {StringPiece{"母音動詞"}, StringPiece{"タ形"}, 0, 10},
  {StringPiece{"母音動詞"}, StringPiece{"タ系推量形"}, 0, 11},
  {StringPiece{"母音動詞"}, StringPiece{"タ系省略推量形"}, 0, 12},
  {StringPiece{"母音動詞"}, StringPiece{"タ系条件形"}, 0, 13},
  {StringPiece{"母音動詞"}, StringPiece{"タ系連用テ形"}, 0, 14},
  {StringPiece{"母音動詞"}, StringPiece{"タ系連用タリ形"}, 0, 15},
  {StringPiece{"母音動詞"}, StringPiece{"タ系連用チャ形"}, 0, 16},
  {StringPiece{"母音動詞"}, StringPiece{"音便条件形"}, 0, 17},
  {StringPiece{"母音動詞"}, StringPiece{"文語命令形"}, 0, 18},
  {StringPiece{"子音動詞カ行"}, StringPiece{"語幹"}, 1, 1},
  {StringPiece{"子音動詞カ行"}, StringPiece{"基本形"}, 1, 2},
  {StringPiece{"子音動詞カ行"}, StringPiece{"未然形"}, 1, 3},
  {StringPiece{"子音動詞カ行"}, StringPiece{"意志形"}, 1, 4},
  {StringPiece{"子音動詞カ行"}, StringPiece{"省略意志形"}, 1, 5},
  {StringPiece{"子音動詞カ行"}, StringPiece{"命令形"}, 1, 6},
  {StringPiece{"子音動詞カ行"}, StringPiece{"基本条件形"}, 1, 7},
  {StringPiece{"子音動詞カ行"}, StringPiece{"基本連用形"}, 1, 8},
  {StringPiece{"子音動詞カ行"}, StringPiece{"タ接連用形"}, 1, 9},
  {StringPiece{"子音動詞カ行"}, StringPiece{"タ形"}, 1, 10},
  {StringPiece{"子音動詞カ行"}, StringPiece{"タ系推量形"}, 1, 11},
  {StringPiece{"子音動詞カ行"}, StringPiece{"タ系省略推量形"}, 1, 12},
  {StringPiece{"子音動詞カ行"}, StringPiece{"タ系条件形"}, 1, 13},
  {StringPiece{"子音動詞カ行"}, StringPiece{"タ系連用テ形"}, 1, 14},
  {StringPiece{"子音動詞カ行"}, StringPiece{"タ系連用タリ形"}, 1, 15},
  {StringPiece{"子音動詞カ行"}, StringPiece{"タ系連用チャ形"}, 1, 16},
  {StringPiece{"子音動詞カ行"}, StringPiece{"音便条件形"}, 1, 17},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"語幹"}, 2, 1},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"基本形"}, 2, 2},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"未然形"}, 2, 3},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"意志形"}, 2, 4},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"省略意志形"}, 2, 5},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"命令形"}, 2, 6},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"基本条件形"}, 2, 7},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"基本連用形"}, 2, 8},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"タ接連用形"}, 2, 9},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"タ形"}, 2, 10},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"タ系推量形"}, 2, 11},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"タ系省略推量形"}, 2, 12},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"タ系条件形"}, 2, 13},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"タ系連用テ形"}, 2, 14},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"タ系連用タリ形"}, 2, 15},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"タ系連用チャ形"}, 2, 16},
  {StringPiece{"子音動詞カ行促音便形"}, StringPiece{"音便条件形"}, 2, 17},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"語幹"}, 3, 1},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"基本形"}, 3, 2},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"未然形"}, 3, 3},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"意志形"}, 3, 4},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"省略意志形"}, 3, 5},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"命令形"}, 3, 6},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"基本条件形"}, 3, 7},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"基本連用形"}, 3, 8},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"タ接連用形"}, 3, 9},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"タ形"}, 3, 10},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"タ系推量形"}, 3, 11},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"タ系省略推量形"}, 3, 12},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"タ系条件形"}, 3, 13},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"タ系連用テ形"}, 3, 14},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"タ系連用タリ形"}, 3, 15},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"タ系連用チャ形"}, 3, 16},
  {StringPiece{"子音動詞ガ行"}, StringPiece{"音便条件形"}, 3, 17},
  {StringPiece{"子音動詞サ行"}, StringPiece{"語幹"}, 4, 1},
  {StringPiece{"子音動詞サ行"}, StringPiece{"基本形"}, 4, 2},
  {StringPiece{"子音動詞サ行"}, StringPiece{"未然形"}, 4, 3},
  {StringPiece{"子音動詞サ行"}, StringPiece{"意志形"}, 4, 4},
  {StringPiece{"子音動詞サ行"}, StringPiece{"省略意志形"}, 4, 5},
  {StringPiece{"子音動詞サ行"}, StringPiece{"命令形"}, 4, 6},
  {StringPiece{"子音動詞サ行"}, StringPiece{"基本条件形"}, 4, 7},
  {StringPiece{"子音動詞サ行"}, StringPiece{"基本連用形"}, 4, 8},
  {StringPiece{"子音動詞サ行"}, StringPiece{"タ接連用形"}, 4, 9},
  {StringPiece{"子音動詞サ行"}, StringPiece{"タ形"}, 4, 10},
  {StringPiece{"子音動詞サ行"}, StringPiece{"タ系推量形"}, 4, 11},
  {StringPiece{"子音動詞サ行"}, StringPiece{"タ系省略推量形"}, 4, 12},
  {StringPiece{"子音動詞サ行"}, StringPiece{"タ系条件形"}, 4, 13},
  {StringPiece{"子音動詞サ行"}, StringPiece{"タ系連用テ形"}, 4, 14},
  {StringPiece{"子音動詞サ行"}, StringPiece{"タ系連用タリ形"}, 4, 15},
  {StringPiece{"子音動詞サ行"}, StringPiece{"タ系連用チャ形"}, 4, 16},
  {StringPiece{"子音動詞サ行"}, StringPiece{"音便条件形"}, 4, 17},
  {StringPiece{"子音動詞タ行"}, StringPiece{"語幹"}, 5, 1},
  {StringPiece{"子音動詞タ行"}, StringPiece{"基本形"}, 5, 2},
  {StringPiece{"子音動詞タ行"}, StringPiece{"未然形"}, 5, 3},
  {StringPiece{"子音動詞タ行"}, StringPiece{"意志形"}, 5, 4},
  {StringPiece{"子音動詞タ行"}, StringPiece{"省略意志形"}, 5, 5},
  {StringPiece{"子音動詞タ行"}, StringPiece{"命令形"}, 5, 6},
  {StringPiece{"子音動詞タ行"}, StringPiece{"基本条件形"}, 5, 7},
  {StringPiece{"子音動詞タ行"}, StringPiece{"基本連用形"}, 5, 8},
  {StringPiece{"子音動詞タ行"}, StringPiece{"タ接連用形"}, 5, 9},
  {StringPiece{"子音動詞タ行"}, StringPiece{"タ形"}, 5, 10},
  {StringPiece{"子音動詞タ行"}, StringPiece{"タ系推量形"}, 5, 11},
  {StringPiece{"子音動詞タ行"}, StringPiece{"タ系省略推量形"}, 5, 12},
  {StringPiece{"子音動詞タ行"}, StringPiece{"タ系条件形"}, 5, 13},
  {StringPiece{"子音動詞タ行"}, StringPiece{"タ系連用テ形"}, 5, 14},
  {StringPiece{"子音動詞タ行"}, StringPiece{"タ系連用タリ形"}, 5, 15},
  {StringPiece{"子音動詞タ行"}, StringPiece{"タ系連用チャ形"}, 5, 16},
  {StringPiece{"子音動詞タ行"}, StringPiece{"音便条件形"}, 5, 17},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"語幹"}, 6, 1},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"基本形"}, 6, 2},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"未然形"}, 6, 3},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"意志形"}, 6, 4},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"省略意志形"}, 6, 5},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"命令形"}, 6, 6},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"基本条件形"}, 6, 7},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"基本連用形"}, 6, 8},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"タ接連用形"}, 6, 9},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"タ形"}, 6, 10},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"タ系推量形"}, 6, 11},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"タ系省略推量形"}, 6, 12},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"タ系条件形"}, 6, 13},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"タ系連用テ形"}, 6, 14},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"タ系連用タリ形"}, 6, 15},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"タ系連用チャ形"}, 6, 16},
  {StringPiece{"子音動詞ナ行"}, StringPiece{"音便条件形"}, 6, 17},
  {StringPiece{"子音動詞バ行"}, StringPiece{"語幹"}, 7, 1},
  {StringPiece{"子音動詞バ行"}, StringPiece{"基本形"}, 7, 2},
  {StringPiece{"子音動詞バ行"}, StringPiece{"未然形"}, 7, 3},
  {StringPiece{"子音動詞バ行"}, StringPiece{"意志形"}, 7, 4},
  {StringPiece{"子音動詞バ行"}, StringPiece{"省略意志形"}, 7, 5},
  {StringPiece{"子音動詞バ行"}, StringPiece{"命令形"}, 7, 6},
  {StringPiece{"子音動詞バ行"}, StringPiece{"基本条件形"}, 7, 7},
  {StringPiece{"子音動詞バ行"}, StringPiece{"基本連用形"}, 7, 8},
  {StringPiece{"子音動詞バ行"}, StringPiece{"タ接連用形"}, 7, 9},
  {StringPiece{"子音動詞バ行"}, StringPiece{"タ形"}, 7, 10},
  {StringPiece{"子音動詞バ行"}, StringPiece{"タ系推量形"}, 7, 11},
  {StringPiece{"子音動詞バ行"}, StringPiece{"タ系省略推量形"}, 7, 12},
  {StringPiece{"子音動詞バ行"}, StringPiece{"タ系条件形"}, 7, 13},
  {StringPiece{"子音動詞バ行"}, StringPiece{"タ系連用テ形"}, 7, 14},
  {StringPiece{"子音動詞バ行"}, StringPiece{"タ系連用タリ形"}, 7, 15},
  {StringPiece{"子音動詞バ行"}, StringPiece{"タ系連用チャ形"}, 7, 16},
  {StringPiece{"子音動詞バ行"}, StringPiece{"音便条件形"}, 7, 17},
  {StringPiece{"子音動詞マ行"}, StringPiece{"語幹"}, 8, 1},
  {StringPiece{"子音動詞マ行"}, StringPiece{"基本形"}, 8, 2},
  {StringPiece{"子音動詞マ行"}, StringPiece{"未然形"}, 8, 3},
  {StringPiece{"子音動詞マ行"}, StringPiece{"意志形"}, 8, 4},
  {StringPiece{"子音動詞マ行"}, StringPiece{"省略意志形"}, 8, 5},
  {StringPiece{"子音動詞マ行"}, StringPiece{"命令形"}, 8, 6},
  {StringPiece{"子音動詞マ行"}, StringPiece{"基本条件形"}, 8, 7},
  {StringPiece{"子音動詞マ行"}, StringPiece{"基本連用形"}, 8, 8},
  {StringPiece{"子音動詞マ行"}, StringPiece{"タ接連用形"}, 8, 9},
  {StringPiece{"子音動詞マ行"}, StringPiece{"タ形"}, 8, 10},
  {StringPiece{"子音動詞マ行"}, StringPiece{"タ系推量形"}, 8, 11},
  {StringPiece{"子音動詞マ行"}, StringPiece{"タ系省略推量形"}, 8, 12},
  {StringPiece{"子音動詞マ行"}, StringPiece{"タ系条件形"}, 8, 13},
  {StringPiece{"子音動詞マ行"}, StringPiece{"タ系連用テ形"}, 8, 14},
  {StringPiece{"子音動詞マ行"}, StringPiece{"タ系連用タリ形"}, 8, 15},
  {StringPiece{"子音動詞マ行"}, StringPiece{"タ系連用チャ形"}, 8, 16},
  {StringPiece{"子音動詞マ行"}, StringPiece{"音便条件形"}, 8, 17},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"語幹"}, 9, 1},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"基本形"}, 9, 2},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"未然形"}, 9, 3},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"意志形"}, 9, 4},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"省略意志形"}, 9, 5},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"命令形"}, 9, 6},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"基本条件形"}, 9, 7},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"基本連用形"}, 9, 8},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"タ接連用形"}, 9, 9},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"タ形"}, 9, 10},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"タ系推量形"}, 9, 11},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"タ系省略推量形"}, 9, 12},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"タ系条件形"}, 9, 13},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"タ系連用テ形"}, 9, 14},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"タ系連用タリ形"}, 9, 15},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"タ系連用チャ形"}, 9, 16},
  {StringPiece{"子音動詞ラ行"}, StringPiece{"音便条件形"}, 9, 17},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"語幹"}, 10, 1},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"基本形"}, 10, 2},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"未然形"}, 10, 3},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"意志形"}, 10, 4},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"省略意志形"}, 10, 5},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"命令形"}, 10, 6},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"基本条件形"}, 10, 7},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"基本連用形"}, 10, 8},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"タ接連用形"}, 10, 9},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"タ形"}, 10, 10},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"タ系推量形"}, 10, 11},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"タ系省略推量形"}, 10, 12},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"タ系条件形"}, 10, 13},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"タ系連用テ形"}, 10, 14},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"タ系連用タリ形"}, 10, 15},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"タ系連用チャ形"}, 10, 16},
  {StringPiece{"子音動詞ラ行イ形"}, StringPiece{"音便条件形"}, 10, 17},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"語幹"}, 11, 1},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"基本形"}, 11, 2},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"未然形"}, 11, 3},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"意志形"}, 11, 4},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"省略意志形"}, 11, 5},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"命令形"}, 11, 6},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"基本条件形"}, 11, 7},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"基本連用形"}, 11, 8},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"タ接連用形"}, 11, 9},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"タ形"}, 11, 10},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"タ系推量形"}, 11, 11},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"タ系省略推量形"}, 11, 12},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"タ系条件形"}, 11, 13},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"タ系連用テ形"}, 11, 14},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"タ系連用タリ形"}, 11, 15},
  {StringPiece{"子音動詞ワ行"}, StringPiece{"タ系連用チャ形"}, 11, 16},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"語幹"}, 12, 1},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"基本形"}, 12, 2},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"未然形"}, 12, 3},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"意志形"}, 12, 4},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"省略意志形"}, 12, 5},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"命令形"}, 12, 6},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"基本条件形"}, 12, 7},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"基本連用形"}, 12, 8},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"タ接連用形"}, 12, 9},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"タ形"}, 12, 10},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"タ系推量形"}, 12, 11},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"タ系省略推量形"}, 12, 12},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"タ系条件形"}, 12, 13},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"タ系連用テ形"}, 12, 14},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"タ系連用タリ形"}, 12, 15},
  {StringPiece{"子音動詞ワ行文語音便形"}, StringPiece{"タ系連用チャ形"}, 12, 16},
  {StringPiece{"カ変動詞"}, StringPiece{"語幹"}, 13, 1},
  {StringPiece{"カ変動詞"}, StringPiece{"基本形"}, 13, 2},
  {StringPiece{"カ変動詞"}, StringPiece{"未然形"}, 13, 3},
  {StringPiece{"カ変動詞"}, StringPiece{"意志形"}, 13, 4},
  {StringPiece{"カ変動詞"}, StringPiece{"省略意志形"}, 13, 5},
  {StringPiece{"カ変動詞"}, StringPiece{"命令形"}, 13, 6},
  {StringPiece{"カ変動詞"}, StringPiece{"基本条件形"}, 13, 7},
  {StringPiece{"カ変動詞"}, StringPiece{"基本連用形"}, 13, 8},
  {StringPiece{"カ変動詞"}, StringPiece{"タ接連用形"}, 13, 9},
  {StringPiece{"カ変動詞"}, StringPiece{"タ形"}, 13, 10},
  {StringPiece{"カ変動詞"}, StringPiece{"タ系推量形"}, 13, 11},
  {StringPiece{"カ変動詞"}, StringPiece{"タ系省略推量形"}, 13, 12},
  {StringPiece{"カ変動詞"}, StringPiece{"タ系条件形"}, 13, 13},
  {StringPiece{"カ変動詞"}, StringPiece{"タ系連用テ形"}, 13, 14},
  {StringPiece{"カ変動詞"}, StringPiece{"タ系連用タリ形"}, 13, 15},
  {StringPiece{"カ変動詞"}, StringPiece{"タ系連用チャ形"}, 13, 16},
  {StringPiece{"カ変動詞"}, StringPiece{"音便条件形"}, 13, 17},
  {StringPiece{"カ変動詞来"}, StringPiece{"語幹"}, 14, 1},
  {StringPiece{"カ変動詞来"}, StringPiece{"基本形"}, 14, 2},
  {StringPiece{"カ変動詞来"}, StringPiece{"未然形"}, 14, 3},
  {StringPiece{"カ変動詞来"}, StringPiece{"意志形"}, 14, 4},
  {StringPiece{"カ変動詞来"}, StringPiece{"省略意志形"}, 14, 5},
  {StringPiece{"カ変動詞来"}, StringPiece{"命令形"}, 14, 6},
  {StringPiece{"カ変動詞来"}, StringPiece{"基本条件形"}, 14, 7},
  {StringPiece{"カ変動詞来"}, StringPiece{"基本連用形"}, 14, 8},
  {StringPiece{"カ変動詞来"}, StringPiece{"タ接連用形"}, 14, 9},
  {StringPiece{"カ変動詞来"}, StringPiece{"タ形"}, 14, 10},
  {StringPiece{"カ変動詞来"}, StringPiece{"タ系推量形"}, 14, 11},
  {StringPiece{"カ変動詞来"}, StringPiece{"タ系省略推量形"}, 14, 12},
  {StringPiece{"カ変動詞来"}, StringPiece{"タ系条件形"}, 14, 13},
  {StringPiece{"カ変動詞来"}, StringPiece{"タ系連用テ形"}, 14, 14},
  {StringPiece{"カ変動詞来"}, StringPiece{"タ系連用タリ形"}, 14, 15},
  {StringPiece{"カ変動詞来"}, StringPiece{"タ系連用チャ形"}, 14, 16},
  {StringPiece{"カ変動詞来"}, StringPiece{"音便条件形"}, 14, 17},
  {StringPiece{"サ変動詞"}, StringPiece{"語幹"}, 15, 1},
  {StringPiece{"サ変動詞"}, StringPiece{"基本形"}, 15, 2},
  {StringPiece{"サ変動詞"}, StringPiece{"未然形"}, 15, 3},
  {StringPiece{"サ変動詞"}, StringPiece{"意志形"}, 15, 4},
  {StringPiece{"サ変動詞"}, StringPiece{"省略意志形"}, 15, 5},
  {StringPiece{"サ変動詞"}, StringPiece{"命令形"}, 15, 6},
  {StringPiece{"サ変動詞"}, StringPiece{"基本条件形"}, 15, 7},
  {StringPiece{"サ変動詞"}, StringPiece{"基本連用形"}, 15, 8},
  {StringPiece{"サ変動詞"}, StringPiece{"タ接連用形"}, 15, 9},
  {StringPiece{"サ変動詞"}, StringPiece{"タ形"}, 15, 10},
  {StringPiece{"サ変動詞"}, StringPiece{"タ系推量形"}, 15, 11},
  {StringPiece{"サ変動詞"}, StringPiece{"タ系省略推量形"}, 15, 12},
  {StringPiece{"サ変動詞"}, StringPiece{"タ系条件形"}, 15, 13},
  {StringPiece{"サ変動詞"}, StringPiece{"タ系連用テ形"}, 15, 14},
  {StringPiece{"サ変動詞"}, StringPiece{"タ系連用タリ形"}, 15, 15},
  {StringPiece{"サ変動詞"}, StringPiece{"タ系連用チャ形"}, 15, 16},
  {StringPiece{"サ変動詞"}, StringPiece{"音便条件形"}, 15, 17},
  {StringPiece{"サ変動詞"}, StringPiece{"文語基本形"}, 15, 18},
  {StringPiece{"サ変動詞"}, StringPiece{"文語未然形"}, 15, 19},
  {StringPiece{"サ変動詞"}, StringPiece{"文語命令形"}, 15, 20},
  {StringPiece{"ザ変動詞"}, StringPiece{"語幹"}, 16, 1},
  {StringPiece{"ザ変動詞"}, StringPiece{"基本形"}, 16, 2},
  {StringPiece{"ザ変動詞"}, StringPiece{"未然形"}, 16, 3},
  {StringPiece{"ザ変動詞"}, StringPiece{"意志形"}, 16, 4},
  {StringPiece{"ザ変動詞"}, StringPiece{"省略意志形"}, 16, 5},
  {StringPiece{"ザ変動詞"}, StringPiece{"命令形"}, 16, 6},
  {StringPiece{"ザ変動詞"}, StringPiece{"基本条件形"}, 16, 7},
  {StringPiece{"ザ変動詞"}, StringPiece{"基本連用形"}, 16, 8},
  {StringPiece{"ザ変動詞"}, StringPiece{"タ接連用形"}, 16, 9},
  {StringPiece{"ザ変動詞"}, StringPiece{"タ形"}, 16, 10},
  {StringPiece{"ザ変動詞"}, StringPiece{"タ系推量形"}, 16, 11},
  {StringPiece{"ザ変動詞"}, StringPiece{"タ系省略推量形"}, 16, 12},
  {StringPiece{"ザ変動詞"}, StringPiece{"タ系条件形"}, 16, 13},
  {StringPiece{"ザ変動詞"}, StringPiece{"タ系連用テ形"}, 16, 14},
  {StringPiece{"ザ変動詞"}, StringPiece{"タ系連用タリ形"}, 16, 15},
  {StringPiece{"ザ変動詞"}, StringPiece{"タ系連用チャ形"}, 16, 16},
  {StringPiece{"ザ変動詞"}, StringPiece{"音便条件形"}, 16, 17},
  {StringPiece{"ザ変動詞"}, StringPiece{"文語基本形"}, 16, 18},
  {StringPiece{"ザ変動詞"}, StringPiece{"文語未然形"}, 16, 19},
  {StringPiece{"ザ変動詞"}, StringPiece{"文語命令形"}, 16, 20},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"語幹"}, 17, 1},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"基本形"}, 17, 2},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"命令形"}, 17, 3},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"基本推量形"}, 17, 4},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"基本省略推量形"}, 17, 5},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"基本条件形"}, 17, 6},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"基本連用形"}, 17, 7},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"タ形"}, 17, 8},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"タ系推量形"}, 17, 9},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"タ系省略推量形"}, 17, 10},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"タ系条件形"}, 17, 11},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"タ系連用テ形"}, 17, 12},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"タ系連用タリ形"}, 17, 13},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"タ系連用チャ形"}, 17, 14},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"タ系連用チャ形２"}, 17, 15},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"音便条件形"}, 17, 16},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"音便条件形２"}, 17, 17},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"文語基本形"}, 17, 18},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"文語未然形"}, 17, 19},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"文語連用形"}, 17, 20},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"文語連体形"}, 17, 21},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"文語命令形"}, 17, 22},
  {StringPiece{"イ形容詞アウオ段"}, StringPiece{"エ基本形"}, 17, 23},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"語幹"}, 18, 1},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"基本形"}, 18, 2},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"命令形"}, 18, 3},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"基本推量形"}, 18, 4},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"基本省略推量形"}, 18, 5},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"基本条件形"}, 18, 6},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"基本連用形"}, 18, 7},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"タ形"}, 18, 8},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"タ系推量形"}, 18, 9},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"タ系省略推量形"}, 18, 10},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"タ系条件形"}, 18, 11},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"タ系連用テ形"}, 18, 12},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"タ系連用タリ形"}, 18, 13},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"タ系連用チャ形"}, 18, 14},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"タ系連用チャ形２"}, 18, 15},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"音便条件形"}, 18, 16},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"音便条件形２"}, 18, 17},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"文語基本形"}, 18, 18},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"文語未然形"}, 18, 19},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"文語連用形"}, 18, 20},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"文語連体形"}, 18, 21},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"文語命令形"}, 18, 22},
  {StringPiece{"イ形容詞イ段"}, StringPiece{"エ基本形"}, 18, 23},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"語幹"}, 19, 1},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"基本形"}, 19, 2},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"命令形"}, 19, 3},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"基本推量形"}, 19, 4},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"基本省略推量形"}, 19, 5},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"基本条件形"}, 19, 6},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"基本連用形"}, 19, 7},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"タ形"}, 19, 8},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"タ系推量形"}, 19, 9},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"タ系省略推量形"}, 19, 10},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"タ系条件形"}, 19, 11},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"タ系連用テ形"}, 19, 12},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"タ系連用タリ形"}, 19, 13},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"タ系連用チャ形"}, 19, 14},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"タ系連用チャ形２"}, 19, 15},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"音便条件形"}, 19, 16},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"音便条件形２"}, 19, 17},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"文語基本形"}, 19, 18},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"文語未然形"}, 19, 19},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"文語連用形"}, 19, 20},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"文語連体形"}, 19, 21},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"文語命令形"}, 19, 22},
  {StringPiece{"イ形容詞イ段特殊"}, StringPiece{"エ基本形"}, 19, 23},
  {StringPiece{"ナ形容詞"}, StringPiece{"語幹"}, 20, 1},
  {StringPiece{"ナ形容詞"}, StringPiece{"基本形"}, 20, 2},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列基本連体形"}, 20, 3},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列基本推量形"}, 20, 4},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列基本省略推量形"}, 20, 5},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列基本条件形"}, 20, 6},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列基本連用形"}, 20, 7},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列タ形"}, 20, 8},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列タ系推量形"}, 20, 9},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列タ系省略推量形"}, 20, 10},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列タ系条件形"}, 20, 11},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列タ系連用テ形"}, 20, 12},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列タ系連用タリ形"}, 20, 13},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列タ系連用ジャ形"}, 20, 14},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列文語連体形"}, 20, 15},
  {StringPiece{"ナ形容詞"}, StringPiece{"ダ列文語条件形"}, 20, 16},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列基本形"}, 20, 17},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列命令形"}, 20, 18},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列基本推量形"}, 20, 19},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列基本省略推量形"}, 20, 20},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列基本条件形"}, 20, 21},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列基本連用形"}, 20, 22},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列タ形"}, 20, 23},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列タ系推量形"}, 20, 24},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列タ系省略推量形"}, 20, 25},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列タ系条件形"}, 20, 26},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列タ系連用テ形"}, 20, 27},
  {StringPiece{"ナ形容詞"}, StringPiece{"デアル列タ系連用タリ形"}, 20, 28},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列基本形"}, 20, 29},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列音便基本形"}, 20, 30},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列基本推量形"}, 20, 31},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列音便基本推量形"}, 20, 32},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列基本省略推量形"}, 20, 33},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列音便基本省略推量形"}, 20, 34},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列タ形"}, 20, 35},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列タ系推量形"}, 20, 36},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列タ系省略推量形"}, 20, 37},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列タ系条件形"}, 20, 38},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列タ系連用テ形"}, 20, 39},
  {StringPiece{"ナ形容詞"}, StringPiece{"デス列タ系連用タリ形"}, 20, 40},
  {StringPiece{"ナ形容詞"}, StringPiece{"ヤ列基本形"}, 20, 41},
  {StringPiece{"ナ形容詞"}, StringPiece{"ヤ列基本推量形"}, 20, 42},
  {StringPiece{"ナ形容詞"}, StringPiece{"ヤ列基本省略推量形"}, 20, 43},
  {StringPiece{"ナ形容詞"}, StringPiece{"ヤ列タ形"}, 20, 44},
  {StringPiece{"ナ形容詞"}, StringPiece{"ヤ列タ系推量形"}, 20, 45},
  {StringPiece{"ナ形容詞"}, StringPiece{"ヤ列タ系省略推量形"}, 20, 46},
  {StringPiece{"ナ形容詞"}, StringPiece{"ヤ列タ系条件形"}, 20, 47},
  {StringPiece{"ナ形容詞"}, StringPiece{"ヤ列タ系連用タリ形"}, 20, 48},
  {StringPiece{"ナノ形容詞"}, StringPiece{"語幹"}, 21, 1},
  {StringPiece{"ナノ形容詞"}, StringPiece{"基本形"}, 21, 2},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列基本連体形"}, 21, 3},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列特殊連体形"}, 21, 4},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列基本推量形"}, 21, 5},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列基本省略推量形"}, 21, 6},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列基本条件形"}, 21, 7},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列基本連用形"}, 21, 8},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列タ形"}, 21, 9},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列タ系推量形"}, 21, 10},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列タ系省略推量形"}, 21, 11},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列タ系条件形"}, 21, 12},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列タ系連用テ形"}, 21, 13},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列タ系連用タリ形"}, 21, 14},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列タ系連用ジャ形"}, 21, 15},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列文語連体形"}, 21, 16},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ダ列文語条件形"}, 21, 17},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列基本形"}, 21, 18},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列命令形"}, 21, 19},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列基本推量形"}, 21, 20},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列基本省略推量形"}, 21, 21},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列基本条件形"}, 21, 22},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列基本連用形"}, 21, 23},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列タ形"}, 21, 24},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列タ系推量形"}, 21, 25},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列タ系省略推量形"}, 21, 26},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列タ系条件形"}, 21, 27},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列タ系連用テ形"}, 21, 28},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デアル列タ系連用タリ形"}, 21, 29},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列基本形"}, 21, 30},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列音便基本形"}, 21, 31},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列基本推量形"}, 21, 32},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列音便基本推量形"}, 21, 33},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列基本省略推量形"}, 21, 34},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列音便基本省略推量形"}, 21, 35},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列タ形"}, 21, 36},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列タ系推量形"}, 21, 37},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列タ系省略推量形"}, 21, 38},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列タ系条件形"}, 21, 39},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列タ系連用テ形"}, 21, 40},
  {StringPiece{"ナノ形容詞"}, StringPiece{"デス列タ系連用タリ形"}, 21, 41},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ヤ列基本形"}, 21, 42},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ヤ列基本推量形"}, 21, 43},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ヤ列基本省略推量形"}, 21, 44},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ヤ列タ形"}, 21, 45},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ヤ列タ系推量形"}, 21, 46},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ヤ列タ系省略推量形"}, 21, 47},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ヤ列タ系条件形"}, 21, 48},
  {StringPiece{"ナノ形容詞"}, StringPiece{"ヤ列タ系連用タリ形"}, 21, 49},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"語幹"}, 22, 1},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"基本形"}, 22, 2},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列基本連体形"}, 22, 3},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列特殊連体形"}, 22, 4},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列基本推量形"}, 22, 5},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列基本省略推量形"}, 22, 6},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列基本条件形"}, 22, 7},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列基本連用形"}, 22, 8},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列特殊連用形"}, 22, 9},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列タ形"}, 22, 10},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列タ系推量形"}, 22, 11},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列タ系省略推量形"}, 22, 12},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列タ系条件形"}, 22, 13},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列タ系連用テ形"}, 22, 14},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列タ系連用タリ形"}, 22, 15},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列タ系連用ジャ形"}, 22, 16},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列文語連体形"}, 22, 17},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ダ列文語条件形"}, 22, 18},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列基本形"}, 22, 19},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列命令形"}, 22, 20},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列基本推量形"}, 22, 21},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列基本省略推量形"}, 22, 22},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列基本条件形"}, 22, 23},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列基本連用形"}, 22, 24},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列タ形"}, 22, 25},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列タ系推量形"}, 22, 26},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列タ系省略推量形"}, 22, 27},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列タ系条件形"}, 22, 28},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列タ系連用テ形"}, 22, 29},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デアル列タ系連用タリ形"}, 22, 30},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列基本形"}, 22, 31},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列音便基本形"}, 22, 32},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列基本推量形"}, 22, 33},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列音便基本推量形"}, 22, 34},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列基本省略推量形"}, 22, 35},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列音便基本省略推量形"}, 22, 36},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列タ形"}, 22, 37},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列タ系推量形"}, 22, 38},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列タ系省略推量形"}, 22, 39},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列タ系条件形"}, 22, 40},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列タ系連用テ形"}, 22, 41},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"デス列タ系連用タリ形"}, 22, 42},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ヤ列基本形"}, 22, 43},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ヤ列基本推量形"}, 22, 44},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ヤ列基本省略推量形"}, 22, 45},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ヤ列タ形"}, 22, 46},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ヤ列タ系推量形"}, 22, 47},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ヤ列タ系省略推量形"}, 22, 48},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ヤ列タ系条件形"}, 22, 49},
  {StringPiece{"ナ形容詞特殊"}, StringPiece{"ヤ列タ系連用タリ形"}, 22, 50},
  {StringPiece{"タル形容詞"}, StringPiece{"語幹"}, 23, 1},
  {StringPiece{"タル形容詞"}, StringPiece{"基本形"}, 23, 2},
  {StringPiece{"タル形容詞"}, StringPiece{"基本連用形"}, 23, 3},
  {StringPiece{"判定詞"}, StringPiece{"語幹"}, 24, 1},
  {StringPiece{"判定詞"}, StringPiece{"基本形"}, 24, 2},
  {StringPiece{"判定詞"}, StringPiece{"ダ列基本連体形"}, 24, 3},
  {StringPiece{"判定詞"}, StringPiece{"ダ列特殊連体形"}, 24, 4},
  {StringPiece{"判定詞"}, StringPiece{"ダ列基本推量形"}, 24, 5},
  {StringPiece{"判定詞"}, StringPiece{"ダ列基本省略推量形"}, 24, 6},
  {StringPiece{"判定詞"}, StringPiece{"ダ列基本条件形"}, 24, 7},
  {StringPiece{"判定詞"}, StringPiece{"ダ列タ形"}, 24, 8},
  {StringPiece{"判定詞"}, StringPiece{"ダ列タ系推量形"}, 24, 9},
  {StringPiece{"判定詞"}, StringPiece{"ダ列タ系省略推量形"}, 24, 10},
  {StringPiece{"判定詞"}, StringPiece{"ダ列タ系条件形"}, 24, 11},
  {StringPiece{"判定詞"}, StringPiece{"ダ列タ系連用テ形"}, 24, 12},
  {StringPiece{"判定詞"}, StringPiece{"ダ列タ系連用タリ形"}, 24, 13},
  {StringPiece{"判定詞"}, StringPiece{"ダ列タ系連用ジャ形"}, 24, 14},
  {StringPiece{"判定詞"}, StringPiece{"デアル列基本形"}, 24, 15},
  {StringPiece{"判定詞"}, StringPiece{"デアル列命令形"}, 24, 16},
  {StringPiece{"判定詞"}, StringPiece{"デアル列基本推量形"}, 24, 17},
  {StringPiece{"判定詞"}, StringPiece{"デアル列基本省略推量形"}, 24, 18},
  {StringPiece{"判定詞"}, StringPiece{"デアル列基本条件形"}, 24, 19},
  {StringPiece{"判定詞"}, StringPiece{"デアル列基本連用形"}, 24, 20},
  {StringPiece{"判定詞"}, StringPiece{"デアル列タ形"}, 24, 21},
  {StringPiece{"判定詞"}, StringPiece{"デアル列タ系推量形"}, 24, 22},
  {StringPiece{"判定詞"}, StringPiece{"デアル列タ系省略推量形"}, 24, 23},
  {StringPiece{"判定詞"}, StringPiece{"デアル列タ系条件形"}, 24, 24},
  {StringPiece{"判定詞"}, StringPiece{"デアル列タ系連用テ形"}, 24, 25},
  {StringPiece{"判定詞"}, StringPiece{"デアル列タ系連用タリ形"}, 24, 26},
  {StringPiece{"判定詞"}, StringPiece{"デス列基本形"}, 24, 27},
  {StringPiece{"判定詞"}, StringPiece{"デス列音便基本形"}, 24, 28},
  {StringPiece{"判定詞"}, StringPiece{"デス列基本推量形"}, 24, 29},
  {StringPiece{"判定詞"}, StringPiece{"デス列音便基本推量形"}, 24, 30},
  {StringPiece{"判定詞"}, StringPiece{"デス列基本省略推量形"}, 24, 31},
  {StringPiece{"判定詞"}, StringPiece{"デス列音便基本省略推量形"}, 24, 32},
  {StringPiece{"判定詞"}, StringPiece{"デス列タ形"}, 24, 33},
  {StringPiece{"判定詞"}, StringPiece{"デス列タ系推量形"}, 24, 34},
  {StringPiece{"判定詞"}, StringPiece{"デス列タ系省略推量形"}, 24, 35},
  {StringPiece{"判定詞"}, StringPiece{"デス列タ系条件形"}, 24, 36},
  {StringPiece{"判定詞"}, StringPiece{"デス列タ系連用テ形"}, 24, 37},
  {StringPiece{"判定詞"}, StringPiece{"デス列タ系連用タリ形"}, 24, 38},
  {StringPiece{"無活用型"}, StringPiece{"語幹"}, 25, 1},
  {StringPiece{"無活用型"}, StringPiece{"基本形"}, 25, 2},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"語幹"}, 26, 1},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"基本形"}, 26, 2},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"基本条件形"}, 26, 3},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"基本連用形"}, 26, 4},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"基本推量形"}, 26, 5},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"基本省略推量形"}, 26, 6},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"タ形"}, 26, 7},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"タ系条件形"}, 26, 8},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"タ系連用テ形"}, 26, 9},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"タ系推量形"}, 26, 10},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"タ系省略推量形"}, 26, 11},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"音便基本形"}, 26, 12},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"音便推量形"}, 26, 13},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"音便省略推量形"}, 26, 14},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"文語連体形"}, 26, 15},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"文語条件形"}, 26, 16},
  {StringPiece{"助動詞ぬ型"}, StringPiece{"文語音便条件形"}, 26, 17},
  {StringPiece{"助動詞だろう型"}, StringPiece{"語幹"}, 27, 1},
  {StringPiece{"助動詞だろう型"}, StringPiece{"基本形"}, 27, 2},
  {StringPiece{"助動詞だろう型"}, StringPiece{"ダ列基本省略推量形"}, 27, 3},
  {StringPiece{"助動詞だろう型"}, StringPiece{"ダ列基本条件形"}, 27, 4},
  {StringPiece{"助動詞だろう型"}, StringPiece{"デアル列基本推量形"}, 27, 5},
  {StringPiece{"助動詞だろう型"}, StringPiece{"デアル列基本省略推量形"}, 27, 6},
  {StringPiece{"助動詞だろう型"}, StringPiece{"デス列基本推量形"}, 27, 7},
  {StringPiece{"助動詞だろう型"}, StringPiece{"デス列音便基本推量形"}, 27, 8},
  {StringPiece{"助動詞だろう型"}, StringPiece{"デス列基本省略推量形"}, 27, 9},
  {StringPiece{"助動詞だろう型"}, StringPiece{"デス列音便基本省略推量形"}, 27, 10},
  {StringPiece{"助動詞だろう型"}, StringPiece{"ヤ列基本推量形"}, 27, 11},
  {StringPiece{"助動詞だろう型"}, StringPiece{"ヤ列基本省略推量形"}, 27, 12},
  {StringPiece{"助動詞そうだ型"}, StringPiece{"語幹"}, 28, 1},
  {StringPiece{"助動詞そうだ型"}, StringPiece{"基本形"}, 28, 2},
  {StringPiece{"助動詞そうだ型"}, StringPiece{"ダ列タ系連用テ形"}, 28, 3},
  {StringPiece{"助動詞そうだ型"}, StringPiece{"デアル列基本形"}, 28, 4},
  {StringPiece{"助動詞そうだ型"}, StringPiece{"デス列基本形"}, 28, 5},
  {StringPiece{"助動詞そうだ型"}, StringPiece{"デス列音便基本形"}, 28, 6},
  {StringPiece{"助動詞く型"}, StringPiece{"語幹"}, 29, 1},
  {StringPiece{"助動詞く型"}, StringPiece{"基本形"}, 29, 2},
  {StringPiece{"助動詞く型"}, StringPiece{"基本連用形"}, 29, 3},
  {StringPiece{"助動詞く型"}, StringPiece{"文語連体形"}, 29, 4},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"語幹"}, 30, 1},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"基本形"}, 30, 2},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"未然形"}, 30, 3},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"意志形"}, 30, 4},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"省略意志形"}, 30, 5},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"命令形"}, 30, 6},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"タ形"}, 30, 7},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"タ系条件形"}, 30, 8},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"タ系連用テ形"}, 30, 9},
  {StringPiece{"動詞性接尾辞ます型"}, StringPiece{"タ系連用タリ形"}, 30, 10},
  {StringPiece{"動詞性接尾辞うる型"}, StringPiece{"語幹"}, 31, 1},
  {StringPiece{"動詞性接尾辞うる型"}, StringPiece{"基本形"}, 31, 2},
  {StringPiece{"動詞性接尾辞うる型"}, StringPiece{"基本条件形"}, 31, 3},
};

const u32 conjInfoCount = 605U;

} // namespace jumandic
} // namespace jumanpp