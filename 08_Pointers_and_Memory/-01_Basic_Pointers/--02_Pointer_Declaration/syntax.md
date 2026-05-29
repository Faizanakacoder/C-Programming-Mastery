# 📘 Pointer Declaration - Syntax

---

# 📌 Integer Pointer Declaration

int *p;

---

# 📌 Character Pointer Declaration

char *ptr;

---

# 📌 Float Pointer Declaration

float *fp;

---

# 📌 Double Pointer Declaration

double *dp;

---

# 📌 Multiple Pointer Declaration

int *p1, *p2;

---

# 📌 Pointer Initialization

int x = 10;

int *p = &x;

---

# 📌 Access Value using Pointer

printf("%d", *p);

---

# 📌 Display Address

printf("%u", p);

---

# 📌 Pointer Size

printf("%d", sizeof(p));

---

# 📌 Pointer to Pointer

int **ptr;

---

# 📌 Important Rules

✅ Pointer type must match variable type
✅ Use * during declaration
✅ Initialize pointers properly
✅ Avoid uninitialized pointers

---

# ⚠️ Common Mistakes

❌ Missing * symbol
❌ Wrong datatype
❌ Invalid initialization
❌ Uninitialized pointers

---

# 📌 Quick Revision Table

| Syntax     | Meaning           |
| ---------- | ----------------- |
| int *p     | Integer pointer   |
| char *ptr  | Character pointer |
| float *fp  | Float pointer     |
| double *dp | Double pointer    |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
int x = 10;

```
int *p = &x;

printf("%d", *p);
```

}

---

# 🎯 Summary

Pointer Declaration syntax helps:

* store addresses
* access memory
* build advanced C programs
