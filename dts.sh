#!/bin/bash
DTS=arch/arm/boot/dts
RDIR=$(pwd)
# GCC
export CROSS_COMPILE=/home/elite/android/toolchain/arm-eabi-4.8/bin/arm-eabi-
make 
make 
# Make DT.img
./tools/dtbtool -o ./boot.img-dtb -v -s 2048 -p ./scripts/dtc/ $DTS/
# Cleaup
rm -rf $DTS/.*.tmp
rm -rf $DTS/.*.cmd
rm -rf $DTS/*.dtb