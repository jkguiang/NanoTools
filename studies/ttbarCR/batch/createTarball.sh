#! /bin/bash

if [ -f ./inputs/package.tar.xz ]; then
    rm ./inputs/package.tar.xz
fi

tar -hcJf ./inputs/package.tar.xz \
    ../NanoCORE/*.h ../NanoCORE/*.cc \
    ../NanoCORE/NANO_CORE.so \
    ../ScanChain.C ../control.h ../control.C \
    ../doAll.py \
