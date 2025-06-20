# Monty ByteCode Interpreter

![C Language](https://img.shields.io/badge/Language-C-blue)
![License](https://img.shields.io/badge/License-MIT-green)
[![Documentation Status](https://readthedocs.org/projects/monty/badge/?version=latest)](https://monty.readthedocs.io/en/latest/?badge=latest)

## Description

The Monty ByteCode Interpreter is a program that executes Monty ByteCode files. Monty 0.98 is a scripting language that is first compiled into Monty byte codes (similar to Python). It relies on a unique stack data structure with specific instructions to manipulate it.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Monty ByteCode Commands](#monty-bytecode-commands)
- [Project Structure](#project-structure)
- [Features](#features)
- [Examples](#examples)
- [Authors](#authors)
- [License](#license)

## Installation

```bash
git clone https://github.com/Adameelmadani/monty.git
cd monty
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

## Usage

```bash
./monty file.m
```

Where `file.m` is the path to the file containing Monty byte code.

## Monty ByteCode Commands

The Monty interpreter supports the following commands:

| Command | Description |
|---------|-------------|
| `push <int>` | Pushes an integer onto the stack |
| `pall` | Prints all values on the stack |
| `pint` | Prints the value at the top of the stack |
| `pop` | Removes the top element of the stack |
| `swap` | Swaps the top two elements of the stack |
| `add` | Adds the top two elements of the stack |
| `nop` | Does nothing |
| `sub` | Subtracts the top element from the second top element |
| `div` | Divides the second top element by the top element |
| `mul` | Multiplies the top two elements of the stack |
| `mod` | Computes the remainder of the division of the second top element by the top element |
| `pchar` | Prints the char at the top of the stack |
| `pstr` | Prints the string starting at the top of the stack |
| `rotl` | Rotates the stack to the top |
| `rotr` | Rotates the stack to the bottom |
| `stack` | Sets the format of the data to a stack (LIFO) |
| `queue` | Sets the format of the data to a queue (FIFO) |

## Project Structure

```
monty/
├── monty.h          - Header file with prototypes and struct definitions
├── main.c           - Entry point of the program
├── execute.c        - Functions to execute the bytecode instructions
├── stack_ops.c      - Stack operation functions (push, pop, etc.)
├── math_ops.c       - Mathematical operation functions (add, sub, etc.)
├── string_ops.c     - String operation functions (pchar, pstr, etc.)
├── helpers.c        - Helper functions
└── bf/              - Brainf*ck scripts
```

## Features

- Interprets Monty ByteCode files
- Handles stack operations
- Performs arithmetic operations
- Handles string operations
- Error handling with detailed error messages
- Memory management

## Examples

### Example 1: Basic Operations

```
$ cat bytecodes/00.m
push 1
push 2
push 3
pall
$ ./monty bytecodes/00.m
3
2
1
```

### Example 2: Stack Manipulation

```
$ cat bytecodes/07.m
push 1
push 2
push 3
pall
pop
pall
pop
pall
pop
pall
$ ./monty bytecodes/07.m
3
2
1
2
1
1

```

## Authors

- [@Adameelmadani](https://github.com/Adameelmadani)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
