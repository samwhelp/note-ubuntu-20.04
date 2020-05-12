#!/usr/bin/env bash


##
## * https://packages.ubuntu.com/focal/numix-gtk-theme
## $ sudo apt-get install numix-gtk-theme
##

cd build

./demo Numix &

sleep 1 

killall -9 demo
