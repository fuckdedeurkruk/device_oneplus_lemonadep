#!/bin/bash

pclang=prebuilts/clang/host/linux-x86/clang-trb

if [ ! -d $pclang ]; then
echo "clang-trb is empty! cloning.."
git clone https://gitlab.com/varunhardgamer/trb_clang $pclang
else
echo "clang-trb exist, skipping.."
fi
