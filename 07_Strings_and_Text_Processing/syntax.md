# 📘 String and Text Processing - Syntax

---

# 📌 Header File

#include<stdio.h>
#include<string.h>

---

# 📌 String Declaration

char str[20];

---

# 📌 String Initialization

char str[] = "Hello";

---

# 📌 Character Initialization

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

# 📌 String Length

strlen(str);

---

# 📌 String Copy

strcpy(destination, source);

---

# 📌 String Concatenation

strcat(str1, str2);

---

# 📌 String Comparison

strcmp(str1, str2);

---

# 📌 Reverse Traversal

for(i = strlen(str)-1; i >= 0; i--)
{
printf("%c", str[i]);
}

---

# 📌 Array of Strings

char names[5][20];

---

# 📌 String Pointer

char *ptr;

ptr = str;

---

# 📌 Command Line Arguments

void main(int argc, char *argv[])
{
printf("%s", argv[1]);
}

---

# 📌 Important Escape Sequences

| Escape Sequence | Meaning        |
| --------------- | -------------- |
| \n              | New Line       |
| \t              | Tab            |
| \0              | Null Character |
| \               | Backslash      |
| "               | Double Quote   |

---

# 📌 Important Rules

✅ Strings end with '\0'
✅ Use character array for strings
✅ Include `<string.h>` for library functions
✅ Use `%s` for string input/output

---

# ⚠️ Common Mistakes

❌ Using == for comparison
❌ Forgetting null character
❌ Buffer overflow
❌ Using wrong format specifier

---

# 🚀 Quick Revision

| Operation   | Function |
| ----------- | -------- |
| Length      | strlen() |
| Copy        | strcpy() |
| Compare     | strcmp() |
| Concatenate | strcat() |

---

# 🎯 Summary

Strings in C are character arrays used for:

* text handling
* manipulation
* processing
* real-world applications
