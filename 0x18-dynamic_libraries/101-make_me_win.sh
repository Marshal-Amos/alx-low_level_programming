#!/bin/bash
wget -P /tmp https://github.com/Marshal-Amos/alx-low_level_programming/raw/master/0x18-dynamic_libraries/hack_it.so
export LD_PRELOAD=/tmp/hack_it.so
