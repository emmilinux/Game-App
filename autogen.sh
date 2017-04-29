#!/bin/bash

mkdir build
cd build
qmake ../GamesApp.pro
make
rm -fr *.o
