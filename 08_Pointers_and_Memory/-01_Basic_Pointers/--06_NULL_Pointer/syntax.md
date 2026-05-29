# 📘 NULL Pointer - Syntax

---

# 📌 NULL Pointer Declaration

int *p = NULL;

---

# 📌 Character NULL Pointer

char *ptr = NULL;

---

# 📌 Float NULL Pointer

float *fp = NULL;

---

# 📌 Check NULL Pointer

if(p == NULL)

---

# 📌 Check Pointer Before Dereferencing

if(p != NULL)
{
printf("%d", *p);
}

---

# 📌 Assign Address Later

int x = 10;

p = &x;

---

# 📌 Important Rules

✅ Initialize unused pointers with NULL
✅ Check NULL before dereferencing
✅ Use NULL for safe programming

---

# ⚠️ Common Mistakes

❌ Dereferencing NULL pointer
❌ Forgetting NULL check
❌ Using garbage pointers

---

# 📌 Quick Revision Table

| Syntax        | Meaning              |
| ------------- | -------------------- |
| int *p = NULL | NULL pointer         |
| p == NULL     | Check NULL           |
| p = &x        | Assign valid address |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
int *p = NULL;

```
if(p == NULL)
{
    printf("Pointer is NULL");
}
```

}

---

# 🎯 Summary

NULL Pointer syntax helps:

* safe programming
* proper memory checking
* stable execution
