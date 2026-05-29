# 📄 theory.md

# 📘 Introduction to Strings - Theory

---

# 📌 What is a String?

A string is a collection of characters stored inside a character array and terminated using a null character (`\0`).

Example:

HELLO

Internally:

H E L L O \0

---

# 🧠 Internal Working of Strings

Each character occupies:

* 1 byte memory

The compiler reads characters until:
`\0`

This special null character indicates:
“String Ends Here”

---

# 📊 Memory Representation

Example:

char name[] = "RAM";

| Address | Value |
| ------- | ----- |
| 100     | R     |
| 101     | A     |
| 102     | M     |
| 103     | \0    |

---

# 📌 Difference Between Character and String

| Character      | String                |
| -------------- | --------------------- |
| Single symbol  | Collection of symbols |
| Example: 'A'   | Example: "ABC"        |
| Stored in char | Stored in char array  |

---

# 📌 String Traversal

Traversal means accessing characters one-by-one.

Used in:

* counting
* searching
* reversing
* validation

---

# 📌 ASCII Values

Characters are stored internally as ASCII values.

| Character | ASCII |
| --------- | ----- |
| A         | 65    |
| a         | 97    |
| 0         | 48    |

---

# 📌 Null Character (`\0`)

The null character:

* automatically added
* terminates string
* extremely important

Without `\0`, garbage output may occur.

---

# 🌍 Real Life Analogy

Think of a string like a train:

* each coach = character
* last coach = null character

The null character tells:
“Train Ends Here”

---

# 📌 Advantages of Strings

✅ Easy text handling
✅ Human-readable
✅ Useful in software systems
✅ Essential for applications

---

# ❌ Disadvantages

❌ Buffer overflow risk
❌ Manual memory handling
❌ Requires careful traversal

---

# 🧪 Dry Run Example

Input:
HELLO

Traversal:

H → E → L → L → O → \0

Loop stops at:
`\0`

---

# 🎯 Viva Questions

1. What is string?
2. Why is '\0' important?
3. Difference between character and string?
4. What is traversal?
5. What is ASCII?

---

# 🚀 Conclusion

Strings are one of the most important concepts in C programming and form the foundation of text processing systems.
