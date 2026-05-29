# 📘 Integer Pointer - Syntax

---

# 📌 Integer Pointer Declaration

int *ptr;

---

# 📌 Integer Pointer Initialization

int num = 10;

int *ptr = #

---

# 📌 Access Value using Pointer

printf("%d", *ptr);

---

# 📌 Display Address

printf("%u", ptr);

---

# 📌 Modify Value using Pointer

*ptr = 50;

---

# 📌 Integer Pointer Arithmetic

ptr++;

ptr--;

---

# 📌 Integer Pointer with Array

int arr[3] = {1,2,3};

int *p = arr;

---

# 📌 Function with Integer Pointer

void display(int *p)
{
printf("%d", *p);
}

---

# 📌 Important Rules

✅ Use correct datatype
✅ Initialize pointer properly
✅ Use dereference carefully

---

# ⚠️ Common Mistakes

❌ Missing `&` operator
❌ Missing `*` operator
❌ Invalid memory access

---

# 📌 Quick Revision Table

| Syntax   | Meaning          |
| -------- | ---------------- |
| int *ptr | Integer pointer  |
| &num     | Address of num   |
| *ptr     | Value at address |

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

Integer Pointer syntax helps:

* memory access
* efficient programming
* advanced pointer handling
