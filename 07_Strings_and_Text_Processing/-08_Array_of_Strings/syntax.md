# 📄 syntax.md

# 📘 Array of Strings - Syntax

---

# 📌 Declaration

char names[5][20];

---

# 📌 Initialization

char names[3][20] =
{
"RAM",
"AMAN",
"SOHAN"
};

---

# 📌 Input Multiple Strings

for(i = 0; i < n; i++)
{
gets(names[i]);
}

---

# 📌 Display Multiple Strings

for(i = 0; i < n; i++)
{
puts(names[i]);
}

---

# 📌 Compare Strings

strcmp(names[i], names[j]);

---

# 📌 Copy Strings

strcpy(str1, str2);

---

# 📌 Sort Strings

if(strcmp(names[i], names[j]) > 0)

---

# 📌 Important Rules

✅ Use 2D character arrays
✅ Each row stores one string
✅ Use proper dimensions
✅ Include `<string.h>` for comparison

---

# ⚠️ Common Mistakes

❌ Wrong indexing
❌ Small array size
❌ Missing '\0'
❌ Traversal mistakes

---

# 🚀 Quick Revision

| Operation   | Syntax          |
| ----------- | --------------- |
| Declaration | char str[5][20] |
| Input       | gets(str[i])    |
| Output      | puts(str[i])    |
| Compare     | strcmp()        |

---

# 🎯 Summary

Array of Strings is used to:

* store multiple strings
* process textual records
* manage text collections
