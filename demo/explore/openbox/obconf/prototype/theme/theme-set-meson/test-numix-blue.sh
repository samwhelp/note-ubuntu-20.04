#!/usr/bin/env bash

cd build

./demo NumixBlue &

sleep 1 

killall -9 demo
