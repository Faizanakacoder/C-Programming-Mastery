# 📘 Double Pointer - Syntax

---

# 📌 Double Pointer Declaration

int **dptr;

---

# 📌 Double Pointer Initialization

int num = 10;

int *ptr = #

int **dptr = &ptr;

---

# 📌 Access Value using Double Pointer

printf("%d", **dptr);

---

# 📌 Access Pointer Address

printf("%u", *dptr);

---

# 📌 Modify Value using Double Pointer

**dptr = 50;

---

# 📌 Double Pointer with Function

void display(int **dptr)
{
printf("%d", **dptr);
}

---

# 📌 Double Pointer with Array

int arr[3] = {1,2,3};

int *ptr = arr;

int **dptr = &ptr;

---

# 📌 Important Rules

✅ Use `**` for double dereferencing
✅ Initialize pointers correctly
✅ Match datatype properly

---

# ⚠️ Common Mistakes

❌ Using single dereference instead of double
❌ Wrong address assignment
❌ Uninitialized double pointers

---

# 📌 Quick Revision Table

| Syntax     | Meaning        |
| ---------- | -------------- |
| int **dptr | Double pointer |
| *dptr      | Pointer value  |
| **dptr     | Actual value   |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
int num = 10;

```
int *ptr = &num;

int **dptr = &ptr;

printf("%d", **dptr);
```

}

---

# 🎯 Summary

Double Pointer syntax helps:

* manage nested memory
* perform advanced pointer operations
* understand dynamic memory
