#! /bin/bash

if [ -f ./inputs/package.tar.xz ]; then
    rm ./inputs/package.tar.xz
fi

tar -hcJf ./inputs/package.tar.xz \
    ../NanoCORE/*.h ../NanoCORE/*.cc \
    ../NanoCORE/Tools/btagsf/*.h ../NanoCORE/Tools/btagsf/*.h \
    ../NanoCORE/Tools/btagsf/* \
    ../NanoCORE/NANO_CORE.so \
    ../ScanChain.C ../control.h ../control.C ../HLTs.C ../scalefactors.C \
    ../doAll.py \
