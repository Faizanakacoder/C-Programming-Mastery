# 📄 theory.md

# 📘 Array of Strings - Theory

---

# 📌 What is an Array of Strings?

An Array of Strings means:
a collection of multiple strings stored together.

Example:

RAM
SHYAM
AMAN

Each row stores:
one string

---

# 📌 Internal Representation

Example:

char names[3][20];

Meaning:

* 3 strings
* each string can store 19 characters + '\0'

---

# 📊 Memory Representation

| Row | Stored String |
| --- | ------------- |
| 0   | RAM           |
| 1   | SHYAM         |
| 2   | AMAN          |

---

# 📌 Why 2D Array is Used?

Because:

* multiple strings are stored
* each string itself is a character array

Hence:
2D character array is required.

---

# 📌 Declaration

char names[5][20];

Meaning:

* 5 strings
* maximum 20 characters each

---

# 📌 Initialization

char names[3][20] =
{
"RAM",
"AMAN",
"SOHAN"
};

---

# 📌 Traversal

Outer loop:
controls strings

Inner loop:
controls characters

---

# 📌 Searching in Array of Strings

Comparison is done using:
strcmp()

---

# 📌 Sorting Strings

Sorting uses:

* loops
* strcmp()
* strcpy()

---

# 🌍 Real Life Analogy

Think of:
a classroom attendance register.

Each row:
stores one student's name.

---

# 📌 Advantages

✅ Stores multiple strings
✅ Easy organization
✅ Useful for databases
✅ Better text management

---

# ❌ Disadvantages

❌ Higher memory usage
❌ Complex traversal
❌ Fixed size limitation

---

# 🧪 Dry Run Example

names[0] = "RAM"
names[1] = "AMAN"

Traversal:

names[0][0] → R
names[0][1] → A
names[0][2] → M

---

# 🎯 Viva Questions

1. What is array of strings?
2. Why use 2D array?
3. How strings are stored?
4. Difference between 1D and 2D string array?
5. How to traverse array of strings?

---

# 🚀 Conclusion

Array of Strings is essential for handling multiple text records in professional applications.
