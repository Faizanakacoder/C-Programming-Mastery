# 📄 syntax.md

# 📘 String with Pointers - Syntax

---

# 📌 Declare String Pointer

char *ptr;

---

# 📌 Assign String to Pointer

char *ptr = "HELLO";

---

# 📌 Traverse String using Pointer

while(*ptr != '\0')
{
printf("%c", *ptr);
ptr++;
}

---

# 📌 Pointer Arithmetic

ptr++;

ptr + 1;

---

# 📌 Copy String using Pointer

while(*source != '\0')
{
*destination = *source;

```
source++;
destination++;
```

}

*destination = '\0';

---

# 📌 Compare Strings using Pointer

while(*str1 == *str2)
{
str1++;
str2++;
}

---

# 📌 Access Character

printf("%c", *ptr);

---

# 📌 Important Rules

✅ Strings end with '\0'
✅ Increment pointers carefully
✅ Use valid memory addresses
✅ Stop traversal at '\0'

---

# ⚠️ Common Mistakes

❌ Dereferencing NULL pointer
❌ Infinite traversal
❌ Missing '\0'
❌ Invalid pointer arithmetic

---

# 🚀 Quick Revision

| Syntax    | Meaning           |
| --------- | ----------------- |
| *ptr      | Current character |
| ptr++     | Next character    |
| char *ptr | String pointer    |

---

# 🎯 Summary

Pointers allow:

* direct memory access
* efficient traversal
* advanced string handling
