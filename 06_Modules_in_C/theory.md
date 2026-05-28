
---

# 📄 `theory.md`

```md
# 📘 Modules in C Programming - Detailed Theory

---

## 📌 What is a Module?

A **module** is a logically independent section of a program that performs a specific task. It can be:

- A single file
- A group of related files
- A collection of functions

Modules help in dividing large programs into smaller, manageable parts.

---

## 🧠 Concept of Modular Programming

Modular programming is a software design technique where a program is divided into independent modules, each responsible for a specific functionality.

Instead of writing one long program:

❌ Monolithic Code  
✔ Modular Code

---

## 📊 Structure of Modular Programming

A typical modular program contains:

- Main module (entry point)
- Function modules
- Header files
- Utility modules

---

## 🔄 Types of Modules in C

---

# 1️⃣ Single File Module

### 📌 Definition:
A complete program written in a single `.c` file.

### 🧠 Characteristics:
- Simple structure
- Easy to write
- Difficult to manage in large programs
- Used in beginner-level programming

### 📌 Limitation:
Not suitable for large-scale applications.

---

# 2️⃣ Multi-File Module

### 📌 Definition:
Program is divided into multiple `.c` files, each handling a specific task.

### 🧠 Structure:

- `main.c` → Controls program flow
- `module.c` → Contains function definitions
- `module.h` → Contains declarations

### ⚙️ Working Process:

1. Each file is compiled separately
2. Object files are created
3. Linker combines them
4. Final executable is generated

---

# 3️⃣ Header File Module

### 📌 Definition:
A `.h` file that contains function declarations, macros, and constants.

### 🧠 Purpose:

- Share functions across files
- Avoid code duplication
- Improve maintainability

### 📌 Example Use:
```c
#include "math_functions.h"