# 📘 Double Pointer - Theory

---

# 📌 What is Double Pointer?

A Double Pointer is a pointer that:
stores the address of another pointer.

Syntax:

int **dptr;

---

# 📌 Example

int num = 10;

int *ptr = #

int **dptr = &ptr;

Here:

| Variable | Meaning            |
| -------- | ------------------ |
| num      | Integer variable   |
| ptr      | Pointer to integer |
| dptr     | Pointer to pointer |

---

# 📌 Internal Working

Suppose:

num stored at:
1000

ptr stored at:
2000

dptr stored at:
3000

Then:

ptr stores:
1000

dptr stores:
2000

---

# 📊 Memory Representation

| Variable | Address | Value |
| -------- | ------- | ----- |
| num      | 1000    | 10    |
| ptr      | 2000    | 1000  |
| dptr     | 3000    | 2000  |

---

# 📌 Dereferencing

| Expression | Meaning               |
| ---------- | --------------------- |
| ptr        | Address of num        |
| *ptr       | Value of num          |
| dptr       | Address of ptr        |
| *dptr      | Address stored in ptr |
| **dptr     | Actual value          |

---

# 📌 Double Dereferencing

Example:

printf("%d", **dptr);

This accesses:
actual integer value.

---

# 📌 Modifying Value

Example:

**dptr = 500;

Now:

num becomes:
500

---

# 📌 Double Pointer with Functions

Double pointers help:
modify pointers inside functions.

Used in:
dynamic memory allocation.

---

# 🌍 Real Life Analogy

Think of:

* House → variable
* Address slip → pointer
* Locker storing address slip → double pointer

---

# 📌 Advantages

✅ Advanced memory management
✅ Dynamic allocation support
✅ Efficient pointer handling
✅ Useful in arrays of strings

---

# ❌ Disadvantages

❌ Difficult for beginners
❌ Multiple dereferencing confusion
❌ Complex syntax

---

# 🧪 Dry Run Example

Code:

int x = 10;

int *p = &x;

int **dp = &p;

Execution:

p stores:
address of x

dp stores:
address of p

**dp gives:
10

---

# 🎯 Viva Questions

1. What is double pointer?
2. Why double pointers are used?
3. Difference between `*ptr` and `**dptr`?
4. What is nested pointer?
5. What is double dereferencing?

---

# 📌 Important Interview Questions

## Q1. Why double pointers are used in functions?

To modify:
original pointers.

---

## Q2. Difference between pointer and double pointer?

| Pointer                 | Double Pointer         |
| ----------------------- | ---------------------- |
| Stores variable address | Stores pointer address |

---

# 🚀 Conclusion

Double Pointers are very important for:

* dynamic memory allocation
* advanced programming
* data structures
* memory optimization
