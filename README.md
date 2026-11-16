# C Programming - Coursework & Fundamentals

A clean, structured repository for semester coursework in C programming. This repository covers foundational concepts from core syntax to pointers, memory, and data structures with idiomatic, modern C practices.

---

## Environment Setup

This project uses the modern **MinGW-w64 (GCC 14+)** toolchain on Windows.

To verify your compiler is active in your terminal:
`ash
gcc --version
`

---

## How to Compile and Run

Compile any source file from the repository root using strict warning flags:

`ash
# Compile with standard warnings
gcc -Wall -Wextra -std=c11 src/01_hello.c -o 01_hello.exe

# Execute
./01_hello.exe
`

---

## Semester Course Outline

| Module | Topic | Key Concepts |
| :--- | :--- | :--- |
| **01** | **Basics & Syntax** | Primitive types, format specifiers, operators, precision |
| **02** | **Control Flow** | Conditionals (if/else, switch), loops (or, while, do-while) |
| **03** | **Functions & Scope** | Pass-by-value, prototypes, return types, variable lifetime |
| **04** | **Arrays & Strings** | Buffer manipulation, null terminator (\0), standard library string routines |
| **05** | **Pointers & Memory** | Addresses, dereferencing, pointer arithmetic, pass-by-reference |
| **06** | **Structures & Unions** | Custom user types, memory alignment, typedefs, dot and arrow (->) operators |
| **07** | **File I/O** | Streams, file pointers (FILE*), reading and writing structured data |

---

## Compilation Standards

All code is written to the **C11** standard and tested against -Wall -Wextra -Wpedantic to ensure zero compilation warnings, no undefined behavior, and safe memory practices.
