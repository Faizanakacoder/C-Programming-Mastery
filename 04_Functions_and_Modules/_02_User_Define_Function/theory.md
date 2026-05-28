# 📘 Theory of User Defined Functions

---

# 📌 What are User Defined Functions?

User defined functions are functions created by programmers according to program requirements.

These functions are not predefined like library functions.

Programmers manually create them to perform custom tasks.

---

# 📌 Definition

A user defined function is a block of code written by programmer to perform a specific task.

---

# 📌 Basic Syntax

```c
return_type function_name()
{
    // code
}
```

---

# 📌 Components of User Defined Function

| Component | Work |
|-----------|------|
| Declaration | Announces function |
| Definition | Contains logic |
| Function Call | Executes function |
| Return Statement | Returns value |

---

# 📚 Types of User Defined Functions

---

# 1️⃣ No Argument No Return

- Takes no input
- Returns no value

---

# 2️⃣ Argument No Return

- Takes input
- Returns no value

---

# 3️⃣ No Argument Return

- Takes no input
- Returns value

---

# 4️⃣ Argument Return

- Takes input
- Returns value

---

# 🔍 Dry Run Example

```c
#include<stdio.h>

void display();

void main()
{
    display();
}

void display()
{
    printf("Hello");
}
```

---

# 📌 Step-by-Step Execution

| Step | Execution |
|------|-----------|
| 1 | Program starts |
| 2 | main() executes |
| 3 | display() function called |
| 4 | Control transfers to function |
| 5 | Output displayed |
| 6 | Control returns |
| 7 | Program ends |

---

# 📌 Advantages of Functions

| Advantage | Explanation |
|-----------|-------------|
| Reusability | Reuse same logic |
| Readability | Cleaner code |
| Modularity | Smaller program parts |
| Easy Debugging | Easier error fixing |

---

# 📌 Difference Between Library and User Defined Function

| Library Function | User Defined Function |
|-----------------|----------------------|
| Predefined | Programmer created |
| Built-in | Custom |
| Example: printf() | Example: add() |

---

# 📌 Important Points

✅ Functions reduce repetition  
✅ Functions improve readability  
✅ Functions improve modularity  
✅ Functions simplify debugging  

---

# 📌 Viva Questions

## What is user defined function?

A function created by programmer.

---

## Why are functions used?

To reduce repetition and improve readability.

---

## What is function call?

Used to execute function.

---

# 🎯 Conclusion

User defined functions are one of the most important concepts in C programming.

They are heavily used in:
- projects
- DSA
- software development
- placement coding