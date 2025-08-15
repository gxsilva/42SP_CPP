# 42 SP C++ Exercises

This repository contains solutions to all C++ exercises from 42 Ecole, including bonus tasks and personal study notes.

You'll find:
- Completed mandatory and bonus exercises
- Personal notes and explanations on C++ concepts
- Study materials to support your learning

## Contents

- ✅ Mandatory exercises
- ⭐ Bonus exercises
- 📝 C++ study notes

## Purpose

This repository is a consolidated reference of knowledge gained during the C++ modules at 42 SP. It serves as both a resource for future projects and a study aid for anyone learning C++.

## Disclaimer

These solutions and notes reflect my personal understanding and approach. Use them as a reference, but try to solve the exercises independently for the best learning experience.

## Concepts Overview

| Module | Topics Covered                                         | Exercises |
|--------|--------------------------------------------------------|-----------|
| C 00   | Classes, methods, attributes (basics)                  | 3         |
| C 01   | Inheritance (basics), file I/O                         | 7         |
| C 02   | Type conversions, IEEE 754 floating-point              | 4         |
| C 03   | Inheritance, Diamond Problem                           | 4         |
| C 04   | Polymorphism, vTables, abstract classes                | 4         |
| C 05   | Exception handling, custom exception classes           | 4         |
| C 06   | Type conversion (static_cast, dynamic_cast), converter | 3         |
| C 07   | Templates, iterators                                   | 3         |
| C 08   | STL algorithms                                         | 3         |
| C 09   | Projects: Exchange, RPN calculator, Ford-Johnson algo  | 3         |

Each module builds on key C++ concepts, progressing from fundamentals to advanced topics and real-world projects.

## Compilation & Execution

A Makefile is provided with these rules:

| Command              | Description                                         |
|----------------------|----------------------------------------------------|
| `make` / `make all`  | Compile the project and generate the executable    |
| `make clean`         | Remove object files (`.o`), keep the executable    |
| `make fclean`        | Remove object files and the executable             |
| `make re`            | Clean and recompile the entire project             |

## Running the Program

```bash
./<executable_name>
```
Replace `<executable_name>` with the name of your compiled binary as defined in the Makefile.