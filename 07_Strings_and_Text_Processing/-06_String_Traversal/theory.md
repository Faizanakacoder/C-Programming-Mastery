# 📄 theory.md

# 📘 String Traversal - Theory

---

# 📌 What is String Traversal?

String Traversal means:
accessing every character of a string one-by-one.

Example:

HELLO

Traversal:

H → E → L → L → O → \0

---

# 📌 Why Traversal is Important?

Traversal is needed for:

* length calculation
* searching
* counting
* reversing
* comparison
* validation

Without traversal:
string operations cannot be performed.

---

# 📌 Internal Working

A string is stored as:

| Index | Character |
| ----- | --------- |
| 0     | H         |
| 1     | E         |
| 2     | L         |
| 3     | L         |
| 4     | O         |
| 5     | \0        |

Traversal stops at:
`\0`

---

# 📌 Forward Traversal

Starts from:
index 0

Moves toward:
`\0`

---

# 📌 Backward Traversal

Starts from:
last character

Moves toward:
index 0

---

# 📌 Traversal Using While Loop

Most common method.

Condition:

while(str[i] != '\0')

---

# 📌 Traversal Using For Loop

Alternative method.

Example:

for(i=0; str[i]!='\0'; i++)

---

# 📌 Pointer-Based Traversal

Pointers can also access strings.

Example:

while(*ptr != '\0')

---

# 🌍 Real Life Analogy

Think of a string like:
a train with characters in each compartment.

Traversal means:
checking each compartment one-by-one.

---

# 📌 Advantages

✅ Easy processing
✅ Character-level access
✅ Required for algorithms
✅ Useful in searching

---

# ❌ Disadvantages

❌ Wrong traversal causes crashes
❌ Infinite loops possible
❌ Memory access errors possible

---

# 🧪 Dry Run Example

Input:
HELLO

Traversal:

Index 0 → H
Index 1 → E
Index 2 → L
Index 3 → L
Index 4 → O
Index 5 → \0 stop

---

# 🎯 Viva Questions

1. What is traversal?
2. Why traversal stops at '\0'?
3. Difference between forward and backward traversal?
4. Can pointers traverse strings?
5. Why indexing is important?

---

# 🚀 Conclusion

String Traversal is the core concept behind:

* string manipulation
* searching
* processing
* algorithm design
