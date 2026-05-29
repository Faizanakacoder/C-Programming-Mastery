# 📄 syntax.md

# 📘 Declaration and Initialization - Syntax

---

# 📌 String Declaration

char str[20];

---

# 📌 Direct Initialization

char str[] = "HELLO";

---

# 📌 Fixed Size Initialization

char str[10] = "HELLO";

---

# 📌 Character-wise Initialization

char str[] = {'H','E','L','L','O','\0'};

---

# 📌 Empty String

char str[20] = "";

---

# 📌 Runtime Initialization

scanf("%s", str);

---

# 📌 String Output

printf("%s", str);

---

# 📌 Character Access

str[i]

---

# 📌 Traversal

while(str[i] != '\0')
{
printf("%c", str[i]);
i++;
}

---

# 📌 Important Rules

✅ Strings use character arrays
✅ Strings end with '\0'
✅ Double quotes are used for strings
✅ Single quotes are used for characters

---

# ⚠️ Common Mistakes

❌ Missing null character
❌ Using single quotes for strings
❌ Small array size
❌ Reinitializing incorrectly

---

# 🚀 Quick Revision

| Operation        | Syntax               |
| ---------------- | -------------------- |
| Declaration      | char str[20]         |
| Initialization   | char str[] = "HELLO" |
| Character Access | str[i]               |
| Runtime Input    | scanf("%s", str)     |

---

# 🎯 Summary

String declaration and initialization are used to:

* create strings
* assign values
* manage textual data
