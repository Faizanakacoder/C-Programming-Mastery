# 📘 Basic Pointers - Syntax

---

# 📌 Declare Pointer

int *p;

char *ptr;

float *fp;

---

# 📌 Initialize Pointer

int x = 10;

int *p = &x;

---

# 📌 Access Address

printf("%u", &x);

---

# 📌 Access Value using Pointer

printf("%d", *p);

---

# 📌 Change Value using Pointer

*p = 50;

---

# 📌 NULL Pointer Syntax

int *p = NULL;

---

# 📌 Pointer Size

printf("%d", sizeof(p));

---

# 📌 Swapping using Pointers

void swap(int *a, int *b)
{
int temp;

```
temp = *a;
*a = *b;
*b = temp;
```

}

---

# 📌 Pointer to Pointer

int **ptr;

---

# 📌 Pointer with Array

int arr[5];

int *p = arr;

---

# 📌 Dereference Array Pointer

*(p + i)

---

# 📌 Important Rules

✅ Initialize pointers properly
✅ Use correct data types
✅ Use NULL when needed
✅ Dereference carefully

---

# ⚠️ Common Mistakes

❌ Using uninitialized pointers
❌ Invalid dereferencing
❌ Wrong pointer type
❌ Accessing invalid memory

---

# 📌 Quick Revision Table

| Syntax | Meaning          |
| ------ | ---------------- |
| &x     | Address of x     |
| *p     | Value at address |
| int *p | Integer pointer  |
| NULL   | Empty pointer    |

---

# 📌 Example Program Syntax

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

Basic Pointer Syntax helps in:

* memory access
* address handling
* efficient programming
* advanced C concepts
