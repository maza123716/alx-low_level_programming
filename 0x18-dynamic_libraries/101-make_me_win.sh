#!/bin/bash
wget -P /tmp/win.so https://github.com/maza123716/alx-low_level_programming/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
