# 📘 Swapping using Pointers - Theory

---

# 📌 What is Swapping?

Swapping means:
exchanging values between two variables.

Example:

a = 10
b = 20

After swapping:

a = 20
b = 10

---

# 📌 Why Use Pointers for Swapping?

Using pointers allows:
modification of original variables directly.

Pointers access:
actual memory locations.

---

# 📌 Swapping Logic

Swapping requires:
temporary variable.

Steps:

1. Store first value in temp
2. Copy second value into first
3. Copy temp into second

---

# 📌 Swapping using Pointers

Example:

void swap(int *a, int *b)
{
int temp;

```
temp = *a;

*a = *b;

*b = temp;
```

}

---

# 📌 Internal Working

Suppose:

x = 10
y = 20

Memory:

| Variable | Address | Value |
| -------- | ------- | ----- |
| x        | 1000    | 10    |
| y        | 2000    | 20    |

Pointers:

a stores:
1000

b stores:
2000

Dereferencing:

*a → 10
*b → 20

After swapping:

*a → 20
*b → 10

Original variables change.

---

# 📌 Call by Address

Addresses are passed to function.

Example:

swap(&x, &y);

This allows:
direct modification.

---

# 📌 Difference Between Call by Value and Call by Address

| Call by Value      | Call by Address  |
| ------------------ | ---------------- |
| Copy passed        | Address passed   |
| Original unchanged | Original changes |

---

# 🌍 Real Life Analogy

Think of variables as:
two boxes.

Pointers know:
location of both boxes.

Swapping using pointers changes:
actual box contents.

---

# 📌 Advantages

✅ Original values modified
✅ Efficient memory usage
✅ Faster operations
✅ Useful in algorithms

---

# ❌ Disadvantages

❌ More complex for beginners
❌ Wrong pointers may crash program

---

# 🧪 Dry Run Example

Code:

x = 10
y = 20

temp = x → 10

x = y → 20

y = temp → 10

Final:

x = 20
y = 10

---

# 🎯 Viva Questions

1. What is swapping?
2. Why pointers are used in swapping?
3. What is call by address?
4. Why temporary variable is needed?
5. Difference between value and address passing?

---

# 📌 Important Interview Questions

## Q1. Why swapping fails in call by value?

Because:
only copies are modified.

---

## Q2. Why dereference operator is required?

Because:
actual values must be accessed.

---

# 🚀 Conclusion

Swapping using Pointers is essential for:

* function programming
* algorithms
* memory handling
* professional C development
