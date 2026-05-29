# 📘 Introduction to Pointers - Syntax

---

# 📌 Declare Pointer

int *p;

char *ptr;

float *fp;

---

# 📌 Store Address in Pointer

int x = 10;

int *p = &x;

---

# 📌 Display Address

printf("%u", &x);

---

# 📌 Display Pointer Value

printf("%u", p);

---

# 📌 Access Value using Pointer

printf("%d", *p);

---

# 📌 Modify Value using Pointer

*p = 50;

---

# 📌 Character Pointer

char ch = 'A';

char *ptr = &ch;

---

# 📌 Float Pointer

float num = 10.5;

float *fp = #

---

# 📌 Pointer Relationship

Variable → Value

Pointer → Address

---

# 📌 Important Rules

✅ Pointer type should match variable type
✅ Initialize pointers properly
✅ Use * for dereferencing
✅ Use & for address

---

# ⚠️ Common Mistakes

❌ Uninitialized pointers
❌ Confusing * and &
❌ Invalid memory access
❌ Wrong data types

---

# 📌 Quick Revision Table

| Symbol | Meaning              |
| ------ | -------------------- |
| &      | Address operator     |
| *      | Dereference operator |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
int x = 10;

```
int *p = &x;

printf("Value = %d\n", x);

printf("Address = %u\n", &x);

printf("Pointer Value = %d", *p);
```

}

---

# 🎯 Summary

Pointer syntax helps programmers:

* access memory
* handle addresses
* write optimized programs
* understand advanced C concepts
