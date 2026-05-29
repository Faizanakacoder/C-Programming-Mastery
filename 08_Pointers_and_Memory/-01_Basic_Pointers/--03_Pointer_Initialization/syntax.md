# 📘 Pointer Initialization - Syntax

---

# 📌 Integer Pointer Initialization

int x = 10;

int *p = &x;

---

# 📌 Character Pointer Initialization

char ch = 'A';

char *ptr = &ch;

---

# 📌 Float Pointer Initialization

float num = 10.5;

float *fp = #

---

# 📌 Double Pointer Initialization

double d = 15.75;

double *dp = &d;

---

# 📌 NULL Pointer Initialization

int *p = NULL;

---

# 📌 Multiple Pointer Initialization

int a = 10, b = 20;

int *p1 = &a;

int *p2 = &b;

---

# 📌 Access Value using Pointer

printf("%d", *p);

---

# 📌 Modify Value using Pointer

*p = 50;

---

# 📌 Display Address

printf("%u", p);

---

# 📌 Important Rules

✅ Always initialize pointers
✅ Use matching datatype
✅ Use NULL when no address exists
✅ Dereference carefully

---

# ⚠️ Common Mistakes

❌ Uninitialized pointers
❌ Wrong datatype
❌ Invalid dereferencing
❌ Garbage address usage

---

# 📌 Quick Revision Table

| Syntax      | Meaning            |
| ----------- | ------------------ |
| int *p = &x | Initialize pointer |
| *p          | Access value       |
| p           | Stores address     |
| NULL        | Empty pointer      |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
int x = 10;

```
int *p = &x;

printf("Value = %d\n", *p);

printf("Address = %u", p);
```

}

---

# 🎯 Summary

Pointer Initialization syntax helps:

* safe memory handling
* proper address access
* stable program execution
