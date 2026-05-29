# 📘 Address Operator - Syntax

---

# 📌 Address of Integer Variable

int x = 10;

printf("%u", &x);

---

# 📌 Address of Character Variable

char ch = 'A';

printf("%u", &ch);

---

# 📌 Address of Float Variable

float num = 5.5;

printf("%u", &num);

---

# 📌 Store Address in Pointer

int x = 10;

int *p = &x;

---

# 📌 Display Address Stored in Pointer

printf("%u", p);

---

# 📌 Address Operator with Array

int arr[5];

printf("%u", &arr[0]);

---

# 📌 Pointer Initialization using Address Operator

int *ptr;

ptr = &x;

---

# 📌 Important Rules

✅ Use & only with variables
✅ Use proper format specifier
✅ Address operator returns memory address

---

# ⚠️ Common Mistakes

❌ Using & with constants
❌ Confusing address and value
❌ Invalid pointer assignment

---

# 📌 Quick Revision Table

| Syntax           | Meaning         |
| ---------------- | --------------- |
| &x               | Address of x    |
| p = &x           | Store address   |
| printf("%u", &x) | Display address |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
int x = 10;

```
printf("Address = %u", &x);
```

}

---

# 🎯 Summary

Address Operator syntax helps:

* access memory locations
* initialize pointers
* understand memory handling
