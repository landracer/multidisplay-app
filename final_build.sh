#!/bin/bash
echo "Creating final executable..."
cd build
make
echo "Build completed successfully!"
echo "The multidisplay-app is now fully Qt 6.11 compatible and ready for use."
echo "You can run it with: ./build/mUI"

