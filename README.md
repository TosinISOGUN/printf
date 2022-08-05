# C - printf

## Description

`_printf()`; In this project, we recreated a mini-verison of the ```printf``` function found in the ```stdio.h``` library in the C programming language. This function allows us to;
> Print any argument given to the standard output or terminal and similar printing functions can be found in any programming language. 
> This means we can print any combinations of strings, intergers, and other different data types.

## Synopsis
This repository holds all the code necessary for our custom `_printf` function to run. Our mini-version currently handles conversion specifiers: `c`, `s`, `%`, `d`, `i`, `b`, `o` and does not yet support field width, precision, flag characters, or length modifiers. Unique to our `_printf` is our `r` reverse conversion and the `R` rot13 conversion. In essence, you can print any character, string, integer, or decimal number, reverse your strings, transform any number to binary and octal bases, and encrypt your string with rot13 encryption.

Prints text to terminal based on a given format string to standard output. Mimicking glibc printf.

Syntax: *_printf(<format string>, args...)*

## Environment & Requirements
- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc 4.8.4 (-Wall -Werror -Wextra -pedantic -std=gnu89)
- Coding style;
  - Betty Style

## Current features

Implemented specifiers:

- Decimal integers (%d)
- Unsigned decimal integers (%u)
- Strings (%s)
- Hex integers (%x %X)
- Octal integers (%o)
- Binary integers (%b)
- Pointer notation for integers (%p)
- Print a string, but print hidden characters as hex codes (%S)
- Reversed strings (%r)
- Rot13'd strings (%R)


Implemented flags and options:

- Width
- Precision
- +/space to set sign
- *- to* left justify
- *# to display* hex/octal binary prefix
- *and .* to accept variables for width and precision
- hh, h, and l length flags

## Credits

**Collaborators**
- GeamXD
