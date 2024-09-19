#!/bin/bash

# Prepare environment by installing Arduino CLI if not already installed
if ! command -v arduino-cli &> /dev/null
then
    echo "Arduino CLI not found, installing..."
    curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh
    echo "Arduino CLI installed."
else
    echo "Arduino CLI already installed."
fi

echo "Environment is ready for DisplayValueCommon development."