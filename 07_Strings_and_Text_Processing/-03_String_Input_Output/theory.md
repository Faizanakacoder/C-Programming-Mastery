# 📄 theory.md

# 📘 String Input and Output - Theory

---

# 📌 What is String Input?

String input means:

* accepting textual data from the user

Example:

* names
* passwords
* messages
* addresses

---

# 📌 What is String Output?

String output means:

* displaying text on the screen

---

# 📌 scanf() for Strings

Syntax:

scanf("%s", str);

Features:

* reads single word
* stops at space
* simple and fast

Example:

Input:
HELLO WORLD

Stored:
HELLO

---

# 📌 gets() Function

gets(str);

Features:

* reads full line
* accepts spaces
* unsafe function

---

# ⚠️ Why gets() is Unsafe?

gets() does not check:

* array size

This may cause:

* buffer overflow
* memory corruption

---

# 📌 fgets() Function

fgets(str, size, stdin);

Features:

* safer than gets()
* checks size
* recommended method

---

# 📌 printf() Function

Used to display strings.

Example:

printf("%s", str);

---

# 📌 puts() Function

Used for simple string output.

Automatically adds:

* newline

---

# 📌 Difference Between printf() and puts()

| printf()             | puts()            |
| -------------------- | ----------------- |
| formatted output     | simple output     |
| no automatic newline | automatic newline |

---

# 📌 Difference Between scanf() and gets()

| scanf()        | gets()         |
| -------------- | -------------- |
| stops at space | accepts spaces |
| safer          | unsafe         |

---

# 📌 Difference Between gets() and fgets()

| gets()           | fgets()      |
| ---------------- | ------------ |
| unsafe           | safe         |
| no size checking | size checked |

---

# 🌍 Real Life Analogy

Think of:

* input = taking information from user
* output = showing result to user

---

# 📌 Advantages

✅ User interaction
✅ Dynamic programs
✅ Runtime processing
✅ Flexible applications

---

# ❌ Disadvantages

❌ Buffer overflow risk
❌ Improper input handling
❌ Extra newline issues

---

# 🧪 Dry Run Example

Input:
HELLO

Stored:
H E L L O \0

Displayed:
HELLO

---

# 🎯 Viva Questions

1. What is string input?
2. What is string output?
3. Difference between scanf() and gets()?
4. Why fgets() is safer?
5. Difference between printf() and puts()?

---

# 🚀 Conclusion

String Input and Output functions allow programs to interact with users and process real-time textual data.
