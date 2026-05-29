# 📘 Character Pointer - Syntax

---

# 📌 Character Pointer Declaration

char *ptr;

---

# 📌 Character Pointer Initialization

char ch = 'A';

char *ptr = &ch;

---

# 📌 Access Character using Pointer

printf("%c", *ptr);

---

# 📌 Display Address

printf("%u", ptr);

---

# 📌 Modify Character using Pointer

*ptr = 'Z';

---

# 📌 Character Pointer Arithmetic

ptr++;

ptr--;

---

# 📌 Character Pointer with String

char str[] = "HELLO";

char *ptr = str;

---

# 📌 Traverse String using Pointer

while(*ptr != '\0')
{
printf("%c", *ptr);

```
ptr++;
```

}

---

# 📌 Important Rules

✅ Use `%c` for characters
✅ Character pointer increments by 1 byte
✅ Strings end with `\0`

---

# ⚠️ Common Mistakes

❌ Forgetting `\0` terminator
❌ Using wrong format specifier
❌ Dereferencing invalid pointer

---

# 📌 Quick Revision Table

| Syntax    | Meaning                |
| --------- | ---------------------- |
| char *ptr | Character pointer      |
| &ch       | Address of character   |
| *ptr      | Character value        |
| ptr++     | Move to next character |

---

# 📌 Example Syntax

#include<stdio.h>

void main()
{
char ch = 'A';

```
char *ptr = &ch;

printf("%c", *ptr);
```

}

---

# 🎯 Summary

Character Pointer syntax helps:

* handle strings
* process text
* access character memory
