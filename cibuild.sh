#!/bin/bash
CONFIG="Debug"
cmake -G"Visual Studio 16 2019" -Bbuild -H. -DCMAKE_CONFIGURATION_TYPES=${CONFIG}
cmake --build build --config ${CONFIG}
