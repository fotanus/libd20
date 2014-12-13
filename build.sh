#!/bin/sh
rm -rf _build/*
cd _build && cmake .. && make && make test
