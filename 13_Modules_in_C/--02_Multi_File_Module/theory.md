
---

# 📄 `theory.md`

```md id="mf_theory_01"
# 📘 Multi File Module in C Programming - Theory

---

## 🚀 Introduction

A Multi File Module is a programming approach where a single program is divided into multiple files. Each file has a specific role, making the program more structured, reusable, and maintainable.

This is widely used in **professional software development**.

---

## 📌 Definition

A Multi File Module is a system where a program is divided into multiple `.c` and `.h` files, each responsible for a specific part of the program.

---

## 🧠 Structure of Multi File Module

A typical multi-file program includes:

- main.c → execution file
- functions.c → function definitions
- functions.h → function declarations

---

## ⚙️ How Multi File Module Works

### Step-by-step flow:

1. Functions are declared in header file
2. Functions are defined in source file
3. main file calls functions
4. Compiler compiles all files separately
5. Linker combines object files
6. Final executable is created

---

## 📊 File Responsibilities

| File | Purpose |
|------|--------|
| main.c | Program execution |
| .c file | Function definitions |
| .h file | Function declarations |

---

## 📁 Types of Files Used

### 1️⃣ Header File (.h)
- Contains declarations
- Used for sharing functions

### 2️⃣ Source File (.c)
- Contains actual logic
- Function implementation

### 3️⃣ Main File
- Controls program flow
- Calls functions

---

## 🌍 Real Life Analogy

A software project is like a company:

- Manager → main.c
- Employees → functions.c
- Rules → header file

Each has a role but works together.

---

## 📌 Advantages

✔ Better code organization  
✔ Code reuse  
✔ Easy debugging  
✔ Team collaboration  
✔ Scalable projects  

---

## ❌ Disadvantages

❌ More complex setup  
❌ Requires proper linking  
❌ Hard for beginners initially  
❌ File management needed  

---

## ⚙️ Compilation Process

1. Preprocessing → headers included
2. Compilation → each file compiled separately
3. Linking → all object files combined
4. Execution → final output generated

---

## 🧪 Dry Run Example

1. main() starts execution
2. function call is made
3. control moves to another file
4. function executes
5. result returns to main
6. program ends

---

## 🎯 Interview Questions

- What is a multi-file module?
- Why do we use multiple files in C?
- What is header file?
- What is linking?
- Difference between single and multi file module?

---

## 🧾 Conclusion

Multi File Modules are the **foundation of professional software development in C programming**, allowing structured, scalable, and maintainable code.