# 📘 Void Pointer - Syntax

---

# 📌 Void Pointer Declaration

void *ptr;

---

# 📌 Void Pointer Initialization

int num = 10;

void *ptr = #

---

# 📌 Typecasting Void Pointer

printf("%d", *(int *)ptr);

---

# 📌 Float Typecasting

printf("%.2f", *(float *)ptr);

---

# 📌 Character Typecasting

printf("%c", *(char *)ptr);

---

# 📌 Void Pointer with malloc()

void *ptr;

ptr = malloc(sizeof(int));

---

# 📌 Important Rules

✅ Typecasting is mandatory
✅ Void pointer can store any address
✅ Cannot dereference directly

---

# ⚠️ Common Mistakes

❌ Direct dereferencing
❌ Wrong datatype casting
❌ Uninitialized void pointer

---

# 📌 Quick Revision Table

| Syntax      | Meaning              |
| ----------- | -------------------- |
| void *ptr   | Generic pointer      |
| (int *)ptr  | Integer typecast     |
| *(int *)ptr | Access integer value |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
int num = 10;

```
void *ptr = &num;

printf("%d", *(int *)ptr);
```

}

---

# 🎯 Summary

Void Pointer syntax helps:

* generic memory handling
* reusable programming
* dynamic memory operations
