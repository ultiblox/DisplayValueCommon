#!/bin/bash

# Build the DisplayValueCommon library using Arduino CLI
# Skip examples as it's an abstract library

arduino-cli compile --libraries . --fqbn arduino:avr:uno

echo "DisplayValueCommon library compiled successfully."