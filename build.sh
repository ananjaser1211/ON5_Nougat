#!/bin/bash
DTS=arch/arm/boot/dts
RDIR=$(pwd)
# GCC
export CROSS_COMPILE=/home/elite/android/toolchain/arm-eabi-4.8/bin/arm-eabi-
# Cleanup
make clean && make mrproper
#  Nougat Defcon
make 
make 
# Make zImage
make ARCH=arm -j4
# Make DT.img
./tools/dtbtool -o ./boot.img-dtb -v -s 2048 -p ./scripts/dtc/ $DTS/
# Cleaup
rm -rf $DTS/.*.tmp
rm -rf $DTS/.*.cmd
rm -rf $DTS/*.dtb