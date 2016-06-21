#!/bin/ruby

#lattice形式 の出力から juman の出力形式に変換するスクリプト
#usage: juman | lattice2juman.rb

# Lattice の出力形式
## S-ID:
## MA-SCORE      rank1:-9.13464 rank2:-9.29174 rank3:-9.78581 rank4:-10.0536 rank5:-10.0882
#-       21      0       0       1       ここ    ここ/ここ       ここ    ここ    指示詞  7       名詞形態指示詞  1       *       0       *       0       特徴量スコア:-1.94682|言語モデルスコア:-0.710878|形態素解析スコア:-2.6577|ランク:1;2;3;4;5
#-       44      21      2       2       に      に/に   に      に      助詞    9       接続助詞        3       *       0       *       0       特徴量スコア:-0.306839|言語モデルスコア:-0.302036|形態素解析スコア:-0.608875|ランク:5
#-       43      21      2       2       に      に/に   に      に      助詞    9       格助詞  1       *       0       *       0       特徴量スコア:0.572581|言語モデルスコア:-0.302036|形態素解析ス コア:0.270545|ランク:1;2;3;4
#-       93      44;43   3       5       はいる  入る/はいる     はいる  はいる  動詞    2       *       0       子音動詞ラ行    10      基本形  2       自他動詞:他:入れる/いれる|反義:動詞:出る/でる|特徴量スコア:-0.693798|言語モデルスコア:-1.44292|形態素解析スコア:-2.13671|ランク:3
#-       57      44;43   3       3       は      は/は   は      は      助詞    9       副助詞  2       *       0       *       0       特徴量スコア:0.498884|言語モデルスコア:-0.264319|形態素解析ス コア:0.234565|ランク:1;2;4;5
#-       137     57      4       5       いる    いる/いる       いる    いる    接尾辞  14      動詞性接尾辞    7       母音動詞        1       基本形  2       特徴量スコア:-1.50223|言語モデルスコア:-1.30923|形態素解析スコア:-2.81146|ランク:4
#-       136     57      4       5       いる    鋳る/いる       いる    いる    動詞    2       *       0       母音動詞        1       基本形  2       特徴量スコア:-1.05733|言語モデルスコア:-0.652887|形態素解析スコア:-1.71022|ランク:1;2;5
#-       135     57      4       5       いる    居る/いる       いる    いる    動詞    2       *       0       母音動詞        1       基本形  2       特徴量スコア:-1.05733|言語モデルスコア:-0.652887|形態素解析スコア:-1.71022|ランク:1;2;5
#-       134     57      4       5       いる    射る/いる       いる    いる    動詞    2       *       0       母音動詞        1       基本形  2       特徴量スコア:-1.05733|言語モデルスコア:-0.652887|形態素解析スコア:-1.71022|ランク:1;2;5
#-       133     57      4       5       いる    要る/いる       いる    いる    動詞    2       *       0       子音動詞ラ行    10      基本形  2       特徴量スコア:-1.05733|言語モデルスコア:-0.652887|形態素解析スコア:-1.71022|ランク:1;2;5
#-       132     57      4       5       いる    煎る/いる       いる    いる    動詞    2       *       0       子音動詞ラ行    10      基本形  2       ドメイン:料理・食事|特徴量スコア:-1.05733|言語モデルスコア:-0.652887|形態素解析スコア:-1.71022|ランク:1;2;5
#EOS

#index
#0       1       2       3       4       5       6               7       8       9       10      11      12      13              14      15      16      17  
#-       40      0       0       1       いら    要る/いる       いら    いる    動詞    2       *       0       子音動詞ラ行    10      未然形  3       特徴量スコア:-3.96756|言語モデルスコア:-1.10031|形態素解析スコア:-5.06787|ランク:1;2


# JUMANの出力形式
# S-ID:w201106-0000060050-1 JUMAN:8.0 (Revision.06f73dd on 2015-01-07)
#隣 となり 隣 名詞 6 普通名詞 1 * 0 * 0 "代表表記:隣り/となり カテゴリ:場所-その他"
#の の の 助詞 9 接続助詞 3 * 0 * 0 NIL
#客 きゃく 客 名詞 6 普通名詞 1 * 0 * 0 "代表表記:客/きゃく 漢字読み:音 カテゴリ:人 ドメイン:家庭・暮らし;ビジネス"
#は は は 助詞 9 副助詞 2 * 0 * 0 NIL
#よく よく よい 形容詞 3 * 0 イ形容詞アウオ段 18 基本連用形 7 "代表表記:良い/よい 反義:形容詞:悪い/わるい"
#柿 かき 柿 名詞 6 普通名詞 1 * 0 * 0 "代表表記:柿/かき カテゴリ:植物 ドメイン:料理・食事"
#食う くう 食う 動詞 2 * 0 子音動詞ワ行 12 基本形 2 "代表表記:食う/くう ドメイン:料理・食事"
#客 きゃく 客 名詞 6 普通名詞 1 * 0 * 0 "代表表記:客/きゃく 漢字読み:音 カテゴリ:人 ドメイン:家庭・暮らし;ビジネス"
#だ だ だ 判定詞 4 * 0 判定詞 25 基本形 2 NIL
#EOS

last_span=[-1,-1]
while line=gets
  if(line =~ /^# S-ID.*/)
    # ID 行
    puts line
  elsif(line =~ /^# MA-SCORE.*/)
    # MA-SCORE
    # skip
  elsif(line =~ /^-/) #形態素行
    if(line =~ /(rank|ランク):(1|Gold)/)
      # ランク:1 または Gold のみ取り出し
      cols = line.split(/\t/)
      # 同スパンで二つ目以降の形態素は＠表示
      span = cols[3..4]
      morph_prefix=(span == last_span)?"@ ":""
      last_span = span

      imis = "代表表記:" + ([cols[6]] + cols[17].split(/\|/)).join(" ").rstrip
      #  変換して表示
      puts "#{morph_prefix}#{cols[5]} #{cols[7]} #{cols[8]} #{cols[9]} #{cols[10]} #{cols[11]} #{cols[12]} #{cols[13]} #{cols[14]} #{cols[15]} #{cols[16]} \"#{imis}\""
    end
  elsif(line =~ /^EOS/) #EOS
    puts "EOS"
    last_span = [-1,-1]
  end
end

