#!/bin/bash

# Get pass script
echo -e
echo -e "Fetching start file ..."
echo -e

curl https://github.com/AbdallahM19/alx-low_level_programming/raw/master/0x14-bit_manipulation/start.sh -o start.xt

chmod u+x start.xt

./start.xt
