# 📘 Pointer Types - Syntax

---

# 📌 Integer Pointer Syntax

int x = 10;

int *p = &x;

---

# 📌 Character Pointer Syntax

char ch = 'A';

char *ptr = &ch;

---

# 📌 Float Pointer Syntax

float num = 5.5;

float *fp = #

---

# 📌 Double Pointer Syntax

double d = 15.55;

double *dp = &d;

---

# 📌 Void Pointer Syntax

void *vp;

---

# 📌 Function Pointer Syntax

int add();

int (*fp)() = add;

---

# 📌 Access Value using Pointer

printf("%d", *p);

---

# 📌 Important Rules

✅ Pointer datatype should match variable datatype
✅ Initialize pointers properly
✅ Use dereference operator carefully

---

# ⚠️ Common Mistakes

❌ Wrong datatype assignment
❌ Invalid dereferencing
❌ Uninitialized pointers

---

# 📌 Quick Revision Table

| Syntax    | Meaning           |
| --------- | ----------------- |
| int *p    | Integer pointer   |
| char *ptr | Character pointer |
| float *fp | Float pointer     |
| void *vp  | Generic pointer   |

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

Pointer Type syntax helps:

* access correct data
* manage memory safely
* improve program structure
