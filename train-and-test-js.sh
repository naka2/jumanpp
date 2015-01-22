#!/bin/zsh

# Usage: mkdir result
#        ./train-and-test.sh -d data/dic+wikipedia_le3 result/20111014_01

usage() {
    echo "$0 [-s] [-p corpus_postfix] [-d dic_basename] [-f feature.def] [-i iteration_num] [-l unk_max_length] out_basename"
    exit 1
}

# 学習データ
# data/${set_head}-train${set_postfix}.txt
# data/${set_head}-dev${set_postfix}.raw
# data/${set_head}-dev${set_postfix}.mrph
# data/${set_head}-test${set_postfix}.raw
# data/${set_head}-test${set_postfix}.mrph

set_head=KyodaiCorpus
dic_base=japanese.dic
feature_def=feature.def
set_postfix=
use_unknown=''
flag_debug=''
iteration_num=3
unk_max_length=2
while getopts mesgup:d:f:i:l:h OPT
do
    case $OPT in
        m)  set_head=MixedCorpus
            ;;
        d)  dic_base=$OPTARG
            ;;
        p)  set_postfix=$OPTARG
            ;;
        f)  feature_def=$OPTARG
            ;;
        i)  iteration_num=$OPTARG
            ;;
        l)  unk_max_length=$OPTARG
            ;;
        u)  use_unknown='-u'
            ;;
        h)  usage
            ;;
        g)  flag_debug='_g'
            ;;
        e)  skip_train='true'
            ;;
        s)  short_train=1000
            ;;
        s2)  short_train=2000
            ;;
        s3)  short_train=3000
            ;;
    esac
done
shift `expr $OPTIND - 1`

out_base=$1

if [ -n "$set_head" ]; then
    model=$out_base.$set_head.mdl
    set_head="${set_head}-"
else
    model=$out_base.mdl
fi

if [ -z "$model" -o -z "$out_base" ]; then
    usage
fi

if [ ! -f data/$dic_base.da ]; then
    echo "cannot open data/$dic_base.da"
    usage
fi

if [ ! -f data/$feature_def ]; then
    echo "cannot open data/$feature_def"
    usage
fi

# 訓練
if [[ ! $skip_train == 'true' ]]; then 
    if [[ $short_train -gt 0 ]]; then
        echo "./kkn${flag_debug} -t <(cat data/${set_head}train${set_postfix}.txt |shuf -n ${short_train} ) ${use_unknown} -a -s -m $model -d data/$dic_base -f data/$feature_def -i $iteration_num -l $unk_max_length"
        ./kkn${flag_debug} -t <(cat data/${set_head}train${set_postfix}.txt |shuf -n ${short_train} ) ${use_unknown} -a -s -m $model -d data/$dic_base -f data/$feature_def -i $iteration_num -l $unk_max_length
    else
        echo "./kkn${flag_debug} -t data/${set_head}train${set_postfix}.txt -a ${use_unknown}  -s -m $model -d $dic_base -f $feature_def -i $iteration_num -l $unk_max_length"
        ./kkn${flag_debug} -t data/${set_head}train${set_postfix}.txt ${use_unknown} -a -s -m $model -d data/$dic_base -f data/$feature_def -i $iteration_num -l $unk_max_length
    fi

fi

# testdata 上での評価
# kyoto
echo "./kkn${flag_debug} ${use_unknown} -m $model -f data/$feature_def -l $unk_max_length -d data/$dic_base < data/${set_head}kyoto${set_postfix}.raw > $out_base.${set_head}kyoto${set_postfix}.mrp"
./kkn${flag_debug} ${use_unknown} -m $model -f data/$feature_def -l $unk_max_length -d data/$dic_base < data/${set_head}kyoto${set_postfix}.raw > $out_base.${set_head}kyoto${set_postfix}.mrp
juman < data/${set_head}kyoto${set_postfix}.raw | ruby script/juman2morph.rb > $out_base.${set_head}kyoto_juman${set_postfix}.mrp
ldajuman < data/${set_head}kyoto${set_postfix}.raw | ruby script/juman2morph.rb > $out_base.${set_head}kyoto_ldajuman${set_postfix}.mrp

echo "script/eval.pl -v $out_base.${set_head}kyoto${set_postfix}.mrp data/${set_head}kyoto${set_postfix}.txt > $out_base.${set_head}kyoto${set_postfix}.eval"
script/eval.pl -v $out_base.${set_head}kyoto${set_postfix}.mrp data/${set_head}kyoto${set_postfix}.txt > $out_base.${set_head}kyoto${set_postfix}.eval
script/eval.pl -v $out_base.${set_head}kyoto_juman${set_postfix}.mrp data/${set_head}kyoto${set_postfix}.txt > $out_base.${set_head}kyoto_juman${set_postfix}.eval
script/eval.pl -v $out_base.${set_head}kyoto_ldajuman${set_postfix}.mrp data/${set_head}kyoto${set_postfix}.txt > $out_base.${set_head}kyoto_ldajuman${set_postfix}.eval
echo "test kyoto:"
echo "kkn"
tail -3 $out_base.${set_head}kyoto${set_postfix}.eval
echo "juman"
tail -3 $out_base.${set_head}kyoto_juman${set_postfix}.eval
echo "ldajuman"
tail -3 $out_base.${set_head}kyoto_ldajuman${set_postfix}.eval
echo

# 3bun
echo "./kkn${flag_debug} -m $model -f data/$feature_def -l $unk_max_length -d data/$dic_base < data/${set_head}3bun${set_postfix}.raw > $out_base.${set_head}3bun${set_postfix}.mrp"
./kkn${flag_debug} ${use_unknown} -m $model -f data/$feature_def -l $unk_max_length -d data/$dic_base < data/${set_head}3bun${set_postfix}.raw > $out_base.${set_head}3bun${set_postfix}.mrp
juman < data/${set_head}3bun${set_postfix}.raw | ruby script/juman2morph.rb > $out_base.${set_head}3bun_juman${set_postfix}.mrp
ldajuman < data/${set_head}3bun${set_postfix}.raw | ruby script/juman2morph.rb > $out_base.${set_head}3bun_ldajuman${set_postfix}.mrp

echo "script/eval.pl -v $out_base.${set_head}3bun${set_postfix}.mrp data/${set_head}3bun${set_postfix}.txt > $out_base.${set_head}3bun${set_postfix}.eval"
script/eval.pl -v $out_base.${set_head}3bun${set_postfix}.mrp data/${set_head}3bun${set_postfix}.txt > $out_base.${set_head}3bun${set_postfix}.eval
script/eval.pl -v $out_base.${set_head}3bun_juman${set_postfix}.mrp data/${set_head}3bun${set_postfix}.txt > $out_base.${set_head}3bun_juman${set_postfix}.eval
script/eval.pl -v $out_base.${set_head}3bun_ldajuman${set_postfix}.mrp data/${set_head}3bun${set_postfix}.txt > $out_base.${set_head}3bun_ldajuman${set_postfix}.eval
echo "test 3bun:"
echo "kkn"
tail -3 $out_base.${set_head}3bun${set_postfix}.eval
echo "juman"
tail -3 $out_base.${set_head}3bun_juman${set_postfix}.eval
echo "ldajuman"
tail -3 $out_base.${set_head}3bun_ldajuman${set_postfix}.eval

