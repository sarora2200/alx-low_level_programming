#!/bin/bash
wget -P /tmp https://github.com/sarora2200/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgaga.so
export LD_PRELOAD=/tmp/libgiga.so
