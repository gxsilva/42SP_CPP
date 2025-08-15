# 42 SP C++ Exercises

This repository contains all the C++ exercises from the 42 Ecole, including bonus sections.

Alongside the completed exercises, you will also find personal notes and study materials on C++ concepts to support your learning journey.

## Contents

- ✅ All mandatory exercises
- ⭐ Bonus exercises
- 📝 Personal C++ study notes

## Purpose

This repository serves as a consolidated reference of knowledge acquired during the C++ modules at 42 SP. It is intended both as a resource for future projects and as study material for anyone interested in learning C++.

## Disclaimer

These solutions and notes reflect my personal understanding and approach to the projects. Feel free to use them as a reference, but I encourage you to attempt the exercises independently for the best learning experience.

## Concepts Overview

| Module | Topics Covered                                         | Number of Exercises |
|--------|--------------------------------------------------------|---------------------|
| C 00   | Classes, methods, and attributes (basics)              | 3                   |
| C 01   | Inheritance (basics), file I/O                         | 7                   |
| C 02   | Type conversions, IEEE 754 floating-point              | 4                   |
| C 03   | Inheritance, Diamond Problem                           | 4                   |
| C 04   | Polymorphism, vTables, abstract classes                | 4                   |
| C 05   | Exception handling, custom exception classes           | 4                   |
| C 06   | Type conversion (static_cast, dynamic_cast), converter | 3                   |
| C 07   | Templates, iterators                                   | 3                   |
| C 08   | STL algorithms                                         | 3                   |
| C 09   | Projects: Exchange, RPN calculator, Ford-Johnson algorithm | 3               |

Each module focuses on key C++ concepts, gradually building up from foundational topics to advanced programming techniques and real-world projects.

## Compilation & Execution

This project uses a Makefile with the following rules:

| Command         | Description                                             |
|-----------------|--------------------------------------------------------|
| `make` or `make all` | Compiles the project and generates the executable.     |
| `make clean`    | Removes all object files (`.o`), keeping the executable. |
| `make fclean`   | Removes all object files and the executable.               |
| `make re`       | Cleans and recompiles the entire project.                  |

## Running the Program
```bash
./<executable_name>
```
Replace <executable_name> with the name of your compiled binary (as defined in the Makefile).