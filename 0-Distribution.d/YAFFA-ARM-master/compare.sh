#!/bin/sh

diff -u ../../src/kernel/${MYFILE}      ./Dictionary.ino  > ${MYFILE}.diffs



# use:   MYFILE=do_sys.cpp    sh ./compare.sh

