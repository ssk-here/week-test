#!/bin/bash

BUILD_DIR="out/build"
CPPFILE=$1

if [ -z "$CPPFILE" ]; then
  echo "No cpp file provided."
  echo "Usage: ./run_app.sh <cpp_file>"
  echo "Example: ./run_app.sh WEEK1/file.cpp copy relative path"
  exit 1
fi

echo "Building $CPPFILE"

cmake -B "$BUILD_DIR" -DCPPFILE=$CPPFILE

# Check if CMake succeeded
if [ $? -ne 0 ]; then
  echo "CMake configuration failed."
  exit 1
fi

echo "CMake configuration Passed."

# Run Make build system
make -C "$BUILD_DIR"

# Check if Make succeeded
if [ $? -ne 0 ]; then
  echo "Build failed."
  exit 1
fi

echo "Make Passed."

# Run the application
"$BUILD_DIR"/learn
