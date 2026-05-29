# 📘 Swapping using Pointers - Syntax

---

# 📌 Basic Swapping Syntax

int temp;

temp = a;

a = b;

b = temp;

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

# 📌 Function Call

swap(&x, &y);

---

# 📌 Character Swapping

char temp;

temp = *a;

*a = *b;

*b = temp;

---

# 📌 Float Swapping

float temp;

temp = *a;

*a = *b;

*b = temp;

---

# 📌 Important Rules

✅ Pass addresses to function
✅ Use dereference operator
✅ Use temporary variable carefully

---

# ⚠️ Common Mistakes

❌ Passing values instead of addresses
❌ Forgetting * operator
❌ Wrong datatype

---

# 📌 Quick Revision Table

| Syntax      | Meaning          |
| ----------- | ---------------- |
| &x          | Address of x     |
| *a          | Value at address |
| swap(&x,&y) | Address passing  |

---

# 📌 Example Syntax

#include<stdio.h>

void swap(int *a, int *b)
{
int temp;

```
temp = *a;

*a = *b;

*b = temp;
```

}

void main()
{
int x = 10, y = 20;

```
swap(&x, &y);

printf("%d %d", x, y);
```

}

---

# 🎯 Summary

Swapping syntax helps:

* modify original values
* understand pointers
* learn function memory behavior
