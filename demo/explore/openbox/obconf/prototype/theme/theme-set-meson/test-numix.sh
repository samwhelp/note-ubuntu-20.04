#!/usr/bin/env bash

cd build

./demo Numix &

sleep 1 

killall -9 demo
