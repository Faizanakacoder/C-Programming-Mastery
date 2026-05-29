# 📄 syntax.md

# 📘 Basic String Operations Without Library - Syntax

---

# 📌 String Traversal

int i = 0;

while(str[i] != '\0')
{
i++;
}

---

# 📌 Manual String Length

count = 0;

while(str[i] != '\0')
{
count++;
i++;
}

---

# 📌 Manual String Copy

while(str[i] != '\0')
{
str2[i] = str1[i];
i++;
}

str2[i] = '\0';

---

# 📌 Manual String Concatenation

while(str1[i] != '\0')
{
i++;
}

while(str2[j] != '\0')
{
str1[i] = str2[j];
i++;
j++;
}

str1[i] = '\0';

---

# 📌 Manual String Comparison

while(str1[i] == str2[i])
{
if(str1[i] == '\0')
{
break;
}

```
i++;
```

}

---

# 📌 Reverse String

for(i = length-1; i >= 0; i--)
{
printf("%c", str[i]);
}

---

# 📌 Character Frequency

if(str[i] == ch)
{
count++;
}

---

# 📌 Important Rules

✅ Always stop at '\0'
✅ Use loops for traversal
✅ Add '\0' after copy/concatenation
✅ Use proper indexing

---

# ⚠️ Common Mistakes

❌ Missing '\0'
❌ Wrong loop conditions
❌ Array overflow
❌ Incorrect indexing

---

# 🚀 Quick Revision

| Operation | Logic                       |
| --------- | --------------------------- |
| Length    | Count until '\0'            |
| Copy      | Copy character-by-character |
| Compare   | Compare one-by-one          |
| Reverse   | Traverse backward           |

---

# 🎯 Summary

Manual string operations improve:

* traversal logic
* loop understanding
* interview preparation
