#!/bin/sh

SOURCE_DIR=$(dirname "$0")/..
cmake -G "Unix Makefiles"  -DCMAKE_BUILD_TYPE=Debug  -DCMAKE_EXPORT_COMPILE_COMMANDS=1 $SOURCE_DIR