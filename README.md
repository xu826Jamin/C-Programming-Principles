# C-Programming-Principles
## Overview
This project is a collection of C functions developed for Lab 1 of the McMaster Principles of Programming course. It solves a series of algorithmic problems to demonstrate proficiency in C programming fundamentals. The project matters because it establishes a strong foundation in control structures, data types, and basic algorithms, which are essential for low-level system programming and software engineering.

## Features
- **Sum of Multiples**: Calculates the sum of all multiples of a given number between 1 and 1000. This is implemented using three different loop constructs (`for`, `while`, and `do-while`) to showcase versatility.
- **Floating Point Range Checker**: Categorizes a floating-point number into specific ranges based on a dynamic threshold.
- **Perfect Number Finder**: Identifies all "perfect numbers" (numbers equal to the sum of their proper divisors) up to a user-specified limit.
- **Bubble Sort**: Implements the bubble sort algorithm to sort an integer array in ascending order, tracking the number of passes required to complete the sort.
- **Edge Case Handling**: Robustly handles invalid inputs such as non-positive numbers for sums and thresholds, and small arrays for sorting.

## Tech Stack
- **Language**: C (Standard C99 or later)
- **Compiler**: GCC (GNU Compiler Collection)
- **Build Tool**: GNU Make
- **Scripting**: Bash (for the test runner)

## Design Decisions
**In-Place Sorting for Bubble Sort**: 
For the Bubble Sort implementation (`Q4_Bubble`), I decided to sort the array in-place rather than creating a new sorted array. This decision was made to minimize memory usage, which is a critical consideration in C programming. The function returns the number of passes instead of the sorted array (since it's modified in place), providing insight into the algorithm's performance on the given data.

## How to Run
1. **Prerequisites**: Ensure you have `gcc` and `make` installed on your system.
2. **Compile**: Open a terminal in the project directory and run:
   ```bash
   make
   ```
   This will compile the source files and create the `Lab1` executable.
3. **Run Tests**: To run the automated test suite, execute:
   ```bash
   make test
   ```
   Alternatively, you can run the shell script directly:
   ```bash
   ./run.sh
   ```
4. **Clean**: To remove build artifacts (object files and executables), run:
   ```bash
   make clean
   ```

## What I Learned
- **Loop Semantics**: Gained a deep understanding of the subtle differences and appropriate use cases for `for`, `while`, and `do-while` loops.
- **Floating Point Logic**: Learned to work with floating-point comparisons and define logical ranges for data categorization.
- **Algorithm Implementation**: Strengthened skills in translating mathematical concepts (like perfect numbers) and logical procedures (sorting) into working C code.
- **Memory & Pointers**: Reinforced concepts of array manipulation and passing data by reference (arrays decaying to pointers) in C functions.
- **Build Automation**: Learned how to structure a `makefile` to automate the compilation and testing workflow.
