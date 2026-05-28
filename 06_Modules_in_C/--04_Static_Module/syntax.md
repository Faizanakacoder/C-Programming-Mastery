# 📘 Static Module - Syntax

---

## 📌 Static Variable Syntax

void function()
{
    static int x = 0;
    x++;
    printf("%d", x);
}

---

## 📌 Static Function Syntax

static void display()
{
    printf("Hello");
}

---

## 📌 Static Global Variable

static int count = 0;

---

## 📌 Example Program Structure

#include<stdio.h>

void main()
{
    static int x = 5;
    printf("%d", x);
}

---

## 📌 Key Rules

- Static variable initializes only once
- Value persists between function calls
- Static function is file restricted
- Stored in data segment

---

## 🚀 Summary

Static = Memory retention + Controlled scope