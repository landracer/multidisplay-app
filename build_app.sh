#!/bin/bash
echo "Building multidisplay-app with Qt 6..."
cd src
make clean
/usr/lib64/qt6/bin/qmake -spec linux-g++ src.pro
make
echo "Build completed successfully!"

