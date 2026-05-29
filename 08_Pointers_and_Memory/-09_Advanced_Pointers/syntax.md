# 📘 Manual String Implementations - Syntax

---

# 📌 Manual String Length

while(str[i] != '\0')
{
count++;
i++;
}

---

# 📌 Manual String Copy

while(source[i] != '\0')
{
destination[i] = source[i];
i++;
}

destination[i] = '\0';

---

# 📌 Manual String Concatenation

while(str1[i] != '\0')
{
i++;
}

while(str2[j] != '\0')
{
str1[i] = str2[j];

```
i++;
j++;
```

}

str1[i] = '\0';

---

# 📌 Manual String Comparison

while(str1[i] == str2[i])
{
i++;
}

---

# 📌 Manual Reverse

for(i = length - 1; i >= 0; i--)
{
printf("%c", str[i]);
}

---

# 📌 Palindrome Check

if(str[i] != str[j])
{
flag = 0;
}

---

# 📌 Uppercase Conversion

if(str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}

---

# 📌 Lowercase Conversion

if(str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = str[i] + 32;
}

---

# 📌 Important Rules

✅ Strings end with '\0'
✅ Use correct indexing
✅ Stop traversal properly
✅ Handle memory carefully

---

# ⚠️ Common Mistakes

❌ Missing null character
❌ Infinite loops
❌ Wrong array indexing
❌ Incorrect loop condition

---

# 🚀 Quick Revision

| Operation | Logic              |
| --------- | ------------------ |
| strlen    | Count characters   |
| strcpy    | Copy characters    |
| strcat    | Append strings     |
| strcmp    | Compare characters |

---

# 🎯 Summary

Manual implementations improve:

* logic
* memory understanding
* placement preparation
* professional coding skills
