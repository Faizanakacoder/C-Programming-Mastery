# 📘 String and Text Processing - Theory

---

# 📌 What is a String?

A string is a collection of characters stored in a character array and terminated by a null character (`\0`).

Example:

HELLO

Internally stored as:

H E L L O \0

---

# 🧠 Internal Working of Strings

Strings are stored in contiguous memory locations.

Each character occupies:

* 1 byte memory

The null character marks the end of the string.

Without `\0`, the compiler cannot determine where the string ends.

---

# ⚙️ Memory Representation

Example:

char name[] = "C";

Memory:

| Address | Value |
| ------- | ----- |
| 100     | C     |
| 101     | \0    |

---

# 📊 String vs Character Array

| String                | Character Array            |
| --------------------- | -------------------------- |
| Ends with \0          | May not end with \0        |
| Used as text          | Used for raw characters    |
| Printable as sentence | Individual access possible |

---

# 📌 Types of String Operations

## 1️⃣ Input/Output Operations

* gets()
* puts()
* scanf()

## 2️⃣ Traversal Operations

* Counting characters
* Character iteration

## 3️⃣ Manipulation Operations

* Reverse
* Compare
* Concatenate

## 4️⃣ Validation Operations

* Password checking
* Pattern checking

## 5️⃣ Text Processing

* Word counting
* Sentence parsing

---

# 🌍 Real Life Analogy

Think of a string as:

* a train of characters
* each coach = character
* last coach = null character

The null character tells:
“Train Ends Here”

---

# 📌 Advantages of Strings

✅ Easy text handling
✅ Efficient storage
✅ Useful in file handling
✅ Important in applications
✅ Human-readable format

---

# ❌ Disadvantages of Strings

❌ Buffer overflow risk
❌ Memory handling complexity
❌ Manual management needed

---

# 🧩 Important Concepts

## 📌 ASCII Values

Characters are internally stored as ASCII integers.

Example:

'A' → 65
'a' → 97

---

# 📌 Null Character

'\0' is:

* automatically added
* string terminator
* extremely important

---

# 📌 String Traversal

Traversal means accessing characters one-by-one.

Used in:

* searching
* counting
* validation
* conversion

---

# 📌 String Library Functions

Provided in:
<string.h>

Important functions:

* strlen()
* strcpy()
* strcat()
* strcmp()
* strchr()
* strstr()

---

# 📌 Manual String Logic

Interviewers often ask:
“Implement string functions manually”

Example:

* own strlen()
* own strcpy()
* own reverse()

This improves logic-building skills.

---

# 🔥 Important Interview Questions

## Basic

* What is a string?
* Why '\0' is important?

## Intermediate

* Difference between gets() and scanf()
* Difference between strcpy() and strncpy()

## Advanced

* Implement strlen manually
* Reverse without library
* Palindrome check

---

# 🧪 Dry Run Example

Input:
HELLO

Traversal:

H → E → L → L → O → \0

Loop stops at '\0'.

---

# ⚠️ Common Errors

| Mistake         | Problem             |
| --------------- | ------------------- |
| Missing \0      | Garbage output      |
| Using ==        | Wrong comparison    |
| Buffer overflow | Crash/security risk |

---

# 📚 Applications of String Processing

* Search engines
* Chat systems
* Compilers
* AI systems
* File systems
* Databases
* Password systems

---

# 🎯 Viva Questions

1. What is string?
2. Why null character is required?
3. Difference between gets() and puts()?
4. What is string traversal?
5. Which header file is used for string functions?

---

# 🚀 Conclusion

String processing is one of the most powerful and important areas of C programming.

It forms the foundation for:

* text manipulation
* file processing
* command systems
* real-world applications

A strong understanding of strings greatly improves programming logic and problem-solving skills.
