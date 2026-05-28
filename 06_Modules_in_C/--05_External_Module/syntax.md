# 📘 External Module - Syntax

---

## 📌 Variable Definition File

int x = 10;

---

## 📌 External Declaration File

extern int x;

---

## 📌 Example Usage

file1.c
int a = 100;

file2.c
extern int a;

---

## 📌 Function extern (optional)

extern void display();

---

## 📌 Key Rules

- Variable must be defined once
- extern only declares, not allocates memory
- Must be linked properly
- Used in multi-file programs

---

## 🚀 Summary

extern = access variable from another file