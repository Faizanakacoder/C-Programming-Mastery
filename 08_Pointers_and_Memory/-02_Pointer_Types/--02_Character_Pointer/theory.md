# 📘 Character Pointer - Theory

---

# 📌 What is Character Pointer?

A Character Pointer is a pointer variable that:
stores address of a character variable.

Syntax:

char *ptr;

---

# 📌 Example

char ch = 'A';

char *ptr = &ch;

Here:

| Variable | Meaning            |
| -------- | ------------------ |
| ch       | Character variable |
| ptr      | Character pointer  |
| &ch      | Address of ch      |
| *ptr     | Value at address   |

---

# 📌 Internal Working

Suppose:

ch stored at:
1000

Value:
'A'

Then:

ptr stores:
1000

Using:

*ptr

returns:
'A'

---

# 📊 Memory Representation

| Variable | Address | Value |
| -------- | ------- | ----- |
| ch       | 1000    | A     |
| ptr      | 2000    | 1000  |

---

# 📌 Character Pointer with Strings

Strings are arrays of characters.

Example:

char str[] = "HELLO";

char *ptr = str;

Pointer accesses:
entire string character by character.

---

# 📌 String Traversal

Character pointers can move through strings.

Example:

ptr++

moves to next character.

---

# 📌 Character Pointer Arithmetic

Character pointer increments by:
1 byte.

Because:
character size is 1 byte.

---

# 📌 Difference between Character Array and Pointer

| Character Array | Character Pointer |
| --------------- | ----------------- |
| Fixed memory    | Stores address    |
| Array type      | Pointer type      |

---

# 🌍 Real Life Analogy

Think of character pointer like:
a bookmark pointing to a letter inside a book.

---

# 📌 Advantages

✅ Efficient string handling
✅ Fast text traversal
✅ Useful in memory management
✅ Important for string functions

---

# ❌ Disadvantages

❌ Invalid memory access risk
❌ Beginners may confuse arrays and pointers

---

# 🧪 Dry Run Example

Code:

char ch = 'Z';

char *ptr = &ch;

Execution:

ch stored at:
1000

ptr stores:
1000

*ptr gives:
Z

---

# 🎯 Viva Questions

1. What is character pointer?
2. Why char pointer increments by 1?
3. How strings use character pointers?
4. Difference between char array and pointer?
5. What is string traversal?

---

# 📌 Important Interview Questions

## Q1. Why character pointer is important in strings?

Because:
strings are character arrays.

---

## Q2. What happens when pointer increments?

It moves to:
next character memory location.

---

# 🚀 Conclusion

Character Pointers are very important for:

* string manipulation
* text processing
* memory optimization
