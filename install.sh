#!/bin/bash

# Install DisplayValueCommon library by copying it to the Arduino libraries directory
TARGET_PATH="/home/$USER/Arduino/libraries/DisplayValueCommon"

# Ensure the target directory exists
mkdir -p $(dirname "${TARGET_PATH}")

# Copy the library to the target location
if [ -d "${TARGET_PATH}" ]; then
    echo "Directory already exists, replacing..."
    rm -rf "${TARGET_PATH}"
fi
cp -r . "${TARGET_PATH}"

echo "DisplayValueCommon installed to ${TARGET_PATH}"