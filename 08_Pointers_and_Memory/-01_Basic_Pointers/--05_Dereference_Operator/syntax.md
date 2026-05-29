# 📘 Dereference Operator - Syntax

---

# 📌 Declare and Initialize Pointer

int x = 10;

int *p = &x;

---

# 📌 Access Value using Dereference Operator

printf("%d", *p);

---

# 📌 Modify Value using Dereference Operator

*p = 50;

---

# 📌 Character Pointer Dereference

char ch = 'A';

char *ptr = &ch;

printf("%c", *ptr);

---

# 📌 Float Pointer Dereference

float num = 5.5;

float *fp = #

printf("%.2f", *fp);

---

# 📌 Dereference with Array

int arr[3] = {10,20,30};

int *p = arr;

printf("%d", *(p+1));

---

# 📌 Important Rules

✅ Pointer must be initialized
✅ Use valid memory address
✅ Dereference carefully
✅ Use matching datatype

---

# ⚠️ Common Mistakes

❌ Dereferencing NULL pointer
❌ Dereferencing garbage pointer
❌ Confusing address and value

---

# 📌 Quick Revision Table

| Syntax  | Meaning          |
| ------- | ---------------- |
| p       | Stores address   |
| *p      | Value at address |
| *p = 50 | Modify value     |

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

Dereference Operator syntax helps:

* access actual values
* modify data indirectly
* perform advanced pointer operations
