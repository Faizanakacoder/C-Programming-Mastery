# 📘 Header File Module - Syntax

---

## 📁 Header File (module.h)

#ifndef MODULE_H
#define MODULE_H

void add();
void sub();

#endif

---

## 📁 module.c

#include<stdio.h>
#include "module.h"

void add()
{
    printf("Addition Function");
}

void sub()
{
    printf("Subtraction Function");
}

---

## 📁 main.c

#include "module.h"

void main()
{
    add();
    sub();
}

---

## 📌 Compilation

gcc main.c module.c -o output

---

## 📌 Execution

./output

---

## 📌 Rules

- Always use header guards
- Declare functions in .h
- Define functions in .c
- Include header in main file