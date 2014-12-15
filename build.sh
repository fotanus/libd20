#!/bin/sh
python cpplint.py --filter="-legal/copyright" $(find src/ -name "*cpp")
python cpplint.py --filter="-legal/copyright" $(find include/ -name "*h")

mkdir -p _build
rm -rf _build/*
cd _build && cmake .. && make && CTEST_OUTPUT_ON_FAILURE=1 make test
