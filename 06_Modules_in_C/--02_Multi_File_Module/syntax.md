# 📘 Multi File Module - Syntax Guide

---

## 📌 Basic Structure of Multi File Program

A multi-file program contains:

- main.c
- functions.c
- functions.h

---

## 📁 1. Header File (functions.h)

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void add();
void subtract();

#endif

---

## 📁 2. Function Definition File (functions.c)

#include<stdio.h>
#include "functions.h"

void add()
{
    int a = 10, b = 20;
    printf("Sum = %d", a + b);
}

void subtract()
{
    int a = 20, b = 10;
    printf("Difference = %d", a - b);
}

---

## 📁 3. Main File (main.c)

#include "functions.h"

void main()
{
    add();
    subtract();
}

---

## 📌 Compilation Command

gcc main.c functions.c -o output

---

## 📌 Execution Command

./output

---

## 📌 Function Declaration Syntax

void function_name();

Example:
void add();
void display();

---

## 📌 Function Definition Syntax

void function_name()
{
    // logic
}

---

## 📌 Header Inclusion Syntax

#include "file.h"

---

## 📌 Important Rules

- Always include header guards
- Compile all `.c` files together
- Declare functions in header file
- Define functions in source file
- Keep modular structure clean

---

## 🎯 Key Takeaways

✔ main.c controls execution  
✔ .c files contain logic  
✔ .h files connect modules  
✔ gcc links all files together  
✔ This is real-world C structure  