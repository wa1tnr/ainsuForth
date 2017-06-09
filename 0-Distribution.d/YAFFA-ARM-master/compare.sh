#!/bin/sh

# local idiom - not in YAFFA distribution.

diff -u ../../src/kernel/${MYFILE}      ./Dictionary.ino  > ${MYFILE}.diffs



# use:   MYFILE=do_sys.cpp    sh ./compare.sh

