# 📘 Float Pointer - Syntax

---

# 📌 Float Pointer Declaration

float *ptr;

---

# 📌 Float Pointer Initialization

float num = 10.5;

float *ptr = #

---

# 📌 Access Float Value

printf("%.2f", *ptr);

---

# 📌 Display Address

printf("%u", ptr);

---

# 📌 Modify Float Value

*ptr = 50.5;

---

# 📌 Float Pointer Arithmetic

ptr++;

ptr--;

---

# 📌 Float Pointer with Array

float arr[3] = {1.1,2.2,3.3};

float *ptr = arr;

---

# 📌 Float Pointer with Function

void display(float *ptr)
{
printf("%.2f", *ptr);
}

---

# 📌 Important Rules

✅ Use `%f` or `%.2f` for float
✅ Initialize pointer properly
✅ Use dereference operator carefully

---

# ⚠️ Common Mistakes

❌ Using `%d` for float
❌ Dereferencing invalid pointer
❌ Uninitialized pointer usage

---

# 📌 Quick Revision Table

| Syntax     | Meaning          |
| ---------- | ---------------- |
| float *ptr | Float pointer    |
| &num       | Address of float |
| *ptr       | Value at address |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
float num = 10.5;

```
float *ptr = &num;

printf("%.2f", *ptr);
```

}

---

# 🎯 Summary

Float Pointer syntax helps:

* access decimal values
* perform scientific calculations
* handle memory efficiently
