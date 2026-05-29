# 📘 Text Processing Problems - Syntax

---

# 📌 Count Words

if(str[i] == ' ')
{
    words++;
}

---

# 📌 Count Spaces

if(str[i] == ' ')
{
    spaces++;
}

---

# 📌 Count Special Characters

if(!(str[i]>='A' && str[i]<='Z') &&
   !(str[i]>='a' && str[i]<='z') &&
   !(str[i]>='0' && str[i]<='9'))
{
    special++;
}

---

# 📌 Capitalize First Letter

if(str[i] >= 'a' && str[i] <= 'z')
{
    str[i] = str[i] - 32;
}

---

# 📌 Remove Extra Spaces

if(!(str[i]==' ' && str[i+1]==' '))
{
    newstr[j++] = str[i];
}

---

# 📌 Character Frequency

if(str[i] == ch)
{
    count++;
}

---

# 📌 Replace Character

if(str[i] == old)
{
    str[i] = new;
}

---

# 📌 Traverse Text

while(str[i] != '\0')
{
    i++;
}

---

# 📌 Important Rules

✅ Stop at '\0'  
✅ Handle spaces carefully  
✅ Use correct indexing  
✅ Use ASCII ranges properly  

---

# ⚠️ Common Mistakes

❌ Infinite loops  
❌ Missing '\0'  
❌ Incorrect space handling  
❌ Invalid indexing  

---

# 🚀 Quick Revision

| Operation | Logic |
|---|---|
| Count Words | Count spaces |
| Frequency | Compare characters |
| Replace | Match and modify |
| Capitalize | ASCII conversion |

---

# 🎯 Summary

Text processing uses:
- loops
- strings
- traversal
- conditions
- logical analysis