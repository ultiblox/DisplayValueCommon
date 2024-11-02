# DisplayValueCommon Library

## Deprecation Notice

This library is going to be deprecated. The inheriting libraries will continue to use the same signatures, but eliminating this interface reduces the size of sketches and saves space on the microcontroller.
Inheriting libraries will be updated to no longer inherit this library, but should otherwise be mostly unaffected by the deprecation.

## Overview

The `DisplayValueCommon` is a generic interface that defines the basic structure for display devices in an embedded system. It is intended to be extended by specific display libraries that implement the actual behavior of each method.

## Features

- Defines the basic methods for a display (`init()`, `clear()`, `setLabel()`, `updateValue()`).
- Provides a common interface for developing display libraries.

## Methods

- `init()`: Initializes the display hardware.
- `clear()`: Clears the display screen.
- `setLabel(const String& label)`: Sets the display label, usually shown on the first line.
- `updateValue(const String& value)`: Updates the value shown on the display.

## Usage

This is an abstract interface and cannot be used directly. It should be implemented by specific display classes like `DisplayValueLCD`, `DisplayValueOLED`, etc.


## License
[This project is licensed under the UltiBlox License.](https://ultiblox.org/license)
