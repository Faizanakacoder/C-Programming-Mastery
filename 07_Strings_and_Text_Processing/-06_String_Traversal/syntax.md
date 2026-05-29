# 📄 syntax.md

# 📘 String Traversal - Syntax

---

# 📌 Forward Traversal using while Loop

int i = 0;

while(str[i] != '\0')
{
printf("%c", str[i]);
i++;
}

---

# 📌 Forward Traversal using for Loop

for(i = 0; str[i] != '\0'; i++)
{
printf("%c", str[i]);
}

---

# 📌 Backward Traversal

for(i = length-1; i >= 0; i--)
{
printf("%c", str[i]);
}

---

# 📌 Count Characters

count = 0;

while(str[i] != '\0')
{
count++;
i++;
}

---

# 📌 Pointer-Based Traversal

while(*ptr != '\0')
{
printf("%c", *ptr);
ptr++;
}

---

# 📌 Alternate Character Traversal

for(i = 0; str[i] != '\0'; i = i + 2)
{
printf("%c", str[i]);
}

---

# 📌 Important Rules

✅ Stop traversal at '\0'
✅ Use proper indexing
✅ Increment properly
✅ Avoid out-of-bound access

---

# ⚠️ Common Mistakes

❌ Infinite loop
❌ Missing increment
❌ Wrong condition
❌ Access after '\0'

---

# 🚀 Quick Revision

| Traversal Type    | Direction     |
| ----------------- | ------------- |
| Forward           | Left to Right |
| Backward          | Right to Left |
| Pointer Traversal | Memory-based  |

---

# 🎯 Summary

Traversal is used for:

* reading characters
* processing strings
* searching
* counting
* manipulation
