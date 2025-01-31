# nbit
![logo](https://github.com/user-attachments/assets/d9812265-fa91-4d45-8c13-23b3af82b026)

# Description
// documentation writren by gpt-4o

// nbt writteb by me

# Overview

This documentation provides an overview of a custom programming language implemented in C. The language is designed for manipulating an 8-bit binary representation, allowing users to perform operations such as moving a pointer, setting bits, checking the current state of the binary array, and converting the binary representation to decimal.

# Language Features

# 1. Binary Representation

The language uses an 8-bit binary array represented by the variable bit. Each bit can be set to '0' or '1', and the state of the array can be displayed or converted to a decimal number.

# 2. Pointer Manipulation

A pointer (represented as pointer) allows users to navigate through the binary array. The pointer can move left or right within the bounds of the array.

# 3. Commands

The language supports several commands that can be read from a file. Each command corresponds to specific operations on the binary array or the pointer:

* Move Left: ←
  Decreases the pointer's position by one (move left).

* Move Right: →
  Increases the pointer's position by one (move right).

* Set Bit to 1: ↑
  Sets the current position of the pointer in the binary array to '1'.

* Set Bit to 0: ↓
  Sets the current position of the pointer in the binary array to '0'.

* Check Current State: bts
  Displays the current state of the binary array.

* Convert to Decimal: num
  Converts the current binary representation to a decimal number and prints it.

* Output Character: out
  Outputs the decimal value as a character.

* Reset Binary Array: zro
  Resets all bits in the binary array to '0' and sets the pointer back to position 0.

* New Line: pts
  Outputs a new line.

# 4. File Handling

The language reads commands from a specified file. The filename is passed as a command-line argument. If the filename does not have a .nbt extension, an error message is displayed.

# Usage

To use this language, follow these steps:

1. Create a text file with commands using the specified syntax.

2. Compile and run the C program, passing the filename as an argument:
```shell
   gcc -o nbt nbt.c
   ./nbt tests/hello.nbt
   ```

# End
thx of using nbit <3
