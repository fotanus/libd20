#!/bin/sh

mkdir -p _build
rm -rf _build/*
cd _build && cmake .. && make && CTEST_OUTPUT_ON_FAILURE=1 make test
