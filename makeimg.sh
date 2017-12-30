#!/bin/bash
#Cleanup before build

echo "Remove Any files"
cd /home/elite/Desktop/J3-ON5-NN/rf-tools/AIK-Linux

sudo ./cleanup.sh

echo "Copy Ramdisk"

sudo cp -a /home/elite/Desktop/J3-ON5-NN/rf-tools/ramdisk/. /home/elite/Desktop/J3-ON5-NN/rf-tools/AIK-Linux/ramdisk

	
93ba4a5
echo "copy split-img"

sudo cp -a /home/elite/Desktop/J3-ON5-NN/rf-tools/split_img/. /home/elite/Desktop/J3-ON5-NN/rf-tools/AIK-Linux/split_img

echo "copy compiled zimage"

sudo cp /home/elite/Desktop/J3-ON5-NN/arch/arm/boot/zImage /home/elite/Desktop/J3-ON5-NN/rf-tools/AIK-Linux/split_img/boot.img-zImage

echo "copy compiled dtb"

sudo cp /home/elite/Desktop/J3-ON5-NN/boot.img-dtb /home/elite/Desktop/J3-ON5-NN/rf-tools/AIK-Linux/split_img/boot.img-dtb

echo "packing image"

sudo ./repackimg.sh

echo "Copy boot.img"

sudo cp /home/elite/Desktop/J3-ON5-NN/rf-tools/AIK-Linux/image-new.img /home/elite/Desktop/J3-ON5-NN/rf-tools/out/boot.img

echo "Cleanup after packing"

cd /home/elite/Desktop/J3-ON5-NN/rf-tools/AIK-Linux

sudo ./cleanup.sh

echo "boot.img saved to /rf-tools/out"
