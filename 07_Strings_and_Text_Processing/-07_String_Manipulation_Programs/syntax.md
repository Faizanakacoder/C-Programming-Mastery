# 📄 syntax.md

# 📘 String Manipulation Programs - Syntax

---

# 📌 Reverse String

for(i = length-1; i >= 0; i--)
{
printf("%c", str[i]);
}

---

# 📌 Palindrome Check

if(str[i] != str[length-1-i])
{
flag = 0;
}

---

# 📌 Count Vowels

if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
vowels++;
}

---

# 📌 Convert Uppercase

str[i] = str[i] - 32;

---

# 📌 Convert Lowercase

str[i] = str[i] + 32;

---

# 📌 Count Words

if(str[i] == ' ')
{
words++;
}

---

# 📌 Remove Spaces

if(str[i] != ' ')
{
newstr[j] = str[i];
}

---

# 📌 Replace Character

if(str[i] == old)
{
str[i] = new;
}

---

# 📌 Character Frequency

if(str[i] == ch)
{
count++;
}

---

# 📌 Important Rules

✅ Stop at '\0'
✅ Use proper indexing
✅ Handle spaces carefully
✅ Use ASCII ranges correctly

---

# ⚠️ Common Mistakes

❌ Infinite loops
❌ Missing '\0'
❌ Wrong ASCII conversion
❌ Invalid indexing

---

# 🚀 Quick Revision

| Operation  | Logic             |
| ---------- | ----------------- |
| Reverse    | Traverse backward |
| Palindrome | Compare both ends |
| Word Count | Count spaces      |
| Replace    | Match and replace |

---

# 🎯 Summary

String manipulation programs help in:

* text processing
* logical thinking
* real-world applications
