# 📄 syntax.md

# 📘 String Input and Output - Syntax

---

# 📌 String Input using scanf()

scanf("%s", str);

---

# 📌 String Input using gets()

gets(str);

---

# 📌 String Input using fgets()

fgets(str, sizeof(str), stdin);

---

# 📌 String Output using printf()

printf("%s", str);

---

# 📌 String Output using puts()

puts(str);

---

# 📌 Input Multiple Strings

scanf("%s %s", str1, str2);

---

# 📌 Character-by-Character Output

while(str[i] != '\0')
{
printf("%c", str[i]);
i++;
}

---

# 📌 Full Sentence Input

fgets(str, sizeof(str), stdin);

---

# 📌 Important Rules

✅ `%s` is used for strings
✅ scanf() stops at space
✅ gets() accepts spaces
✅ fgets() is safer

---

# ⚠️ Common Mistakes

❌ Using scanf() for sentences
❌ Small array size
❌ Buffer overflow
❌ Forgetting newline issues

---

# 🚀 Quick Revision

| Function | Purpose           |
| -------- | ----------------- |
| scanf()  | Single word input |
| gets()   | Full line input   |
| fgets()  | Safe input        |
| printf() | Display string    |
| puts()   | Simple output     |

---

# 🎯 Summary

String Input/Output functions are used to:

* accept textual data
* display text
* build interactive applications
