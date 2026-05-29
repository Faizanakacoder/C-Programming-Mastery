# 📄 syntax.md

# 📘 Introduction to Strings - Syntax

---

# 📌 Header Files

#include<stdio.h>
#include<string.h>

---

# 📌 String Declaration

char str[20];

---

# 📌 String Initialization

char str[] = "Hello";

---

# 📌 Character Declaration

char ch = 'A';

---

# 📌 String Input using scanf()

scanf("%s", str);

---

# 📌 String Input using gets()

gets(str);

---

# 📌 String Output using printf()

printf("%s", str);

---

# 📌 String Output using puts()

puts(str);

---

# 📌 String Traversal

int i = 0;

while(str[i] != '\0')
{
printf("%c", str[i]);
i++;
}

---

# 📌 ASCII Display

printf("%d", str[i]);

---

# 📌 Reverse Traversal

for(i = strlen(str)-1; i >= 0; i--)
{
printf("%c", str[i]);
}

---

# 📌 Important Rules

✅ Strings end with '\0'
✅ Strings use character arrays
✅ Use `%s` for strings
✅ Include `<string.h>` for library functions

---

# ⚠️ Common Mistakes

❌ Missing null character
❌ Using == for comparison
❌ Buffer overflow
❌ Wrong format specifier

---

# 🚀 Quick Revision

| Operation   | Syntax            |
| ----------- | ----------------- |
| Declaration | char str[20]      |
| Input       | scanf("%s", str)  |
| Output      | printf("%s", str) |
| Traversal   | str[i]            |

---

# 🎯 Summary

Strings are character arrays used for:

* text handling
* processing
* manipulation
* applications
