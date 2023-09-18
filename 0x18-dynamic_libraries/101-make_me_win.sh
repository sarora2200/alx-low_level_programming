#!/bin/bash
wget -P /tmp  https://github.com/sarora2200/alx-low_level_programming/raw/1878c02e939c9080aaf196b2805fb9bc1b46c184/0x18-dynamic_libraries/myprintf.so
export LD_PRELOAD=/tmp/myprintf.so
