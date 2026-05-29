# 📘 Pointer Size - Syntax

---

# 📌 Integer Pointer Size

int *p;

printf("%d", sizeof(p));

---

# 📌 Character Pointer Size

char *ptr;

printf("%d", sizeof(ptr));

---

# 📌 Float Pointer Size

float *fp;

printf("%d", sizeof(fp));

---

# 📌 Double Pointer Size

double *dp;

printf("%d", sizeof(dp));

---

# 📌 Void Pointer Size

void *vp;

printf("%d", sizeof(vp));

---

# 📌 Compare Pointer Sizes

printf("%d", sizeof(int*));

printf("%d", sizeof(char*));

---

# 📌 Important Rules

✅ Use sizeof() operator
✅ Pointer size depends on architecture
✅ Pointer datatype usually does not affect size

---

# ⚠️ Common Mistakes

❌ Confusing data size with pointer size
❌ Assuming int* bigger than char*
❌ Forgetting architecture dependency

---

# 📌 Quick Revision Table

| Syntax        | Meaning                |
| ------------- | ---------------------- |
| sizeof(p)     | Pointer size           |
| sizeof(int*)  | Integer pointer size   |
| sizeof(char*) | Character pointer size |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
int *p;

```
printf("%d", sizeof(p));
```

}

---

# 🎯 Summary

Pointer Size syntax helps:

* understand memory usage
* analyze architecture
* improve low-level programming
