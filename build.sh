#!/bin/bash

# Build all example sketches for DisplayValueCommon using Arduino CLI
arduino-cli compile --fqbn arduino:avr:uno examples/BasicUsage/BasicUsage.ino

echo "DisplayValueCommon examples compiled successfully."