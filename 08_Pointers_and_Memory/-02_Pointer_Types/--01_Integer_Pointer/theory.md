# 📘 Integer Pointer - Theory

---

# 📌 What is Integer Pointer?

An Integer Pointer is a pointer variable that:
stores address of an integer variable.

Syntax:

int *ptr;

---

# 📌 Example

int num = 100;

int *ptr = #

Here:

| Variable | Meaning                 |
| -------- | ----------------------- |
| num      | Integer variable        |
| ptr      | Integer pointer         |
| &num     | Address of num          |
| *ptr     | Value stored at address |

---

# 📌 Internal Working

Suppose:

num stored at:
1000

Value:
50

Then:

ptr stores:
1000

Using:

*ptr

returns:
50

---

# 📊 Memory Representation

| Variable | Address | Value |
| -------- | ------- | ----- |
| num      | 1000    | 50    |
| ptr      | 2000    | 1000  |

---

# 📌 Dereferencing

Dereferencing means:
accessing value stored at memory address.

Example:

printf("%d", *ptr);

---

# 📌 Modifying Value using Pointer

Example:

*ptr = 200;

Now:

num becomes:
200

---

# 📌 Pointer Arithmetic

Integer pointer increments by:
4 bytes normally.

Example:

ptr++

moves pointer to next integer location.

---

# 📌 Integer Pointer with Arrays

Example:

int arr[3] = {10,20,30};

int *p = arr;

Pointer accesses array elements.

---

# 📌 Integer Pointer with Functions

Addresses can be passed to functions.

Example:

swap(&a,&b);

---

# 🌍 Real Life Analogy

Think of integer pointer like:
a house address written on paper.

Pointer stores:
location.

Dereferencing visits:
actual house value.

---

# 📌 Advantages

✅ Direct memory access
✅ Efficient programming
✅ Useful in arrays
✅ Important for dynamic memory

---

# ❌ Disadvantages

❌ Invalid pointers cause crashes
❌ Hard for beginners
❌ Requires careful handling

---

# 🧪 Dry Run Example

Code:

int x = 10;

int *p = &x;

Execution:

x stored at:
1000

p stores:
1000

*p gives:
10

---

# 🎯 Viva Questions

1. What is integer pointer?
2. Why use integer pointers?
3. What is dereference operator?
4. What does `&` operator do?
5. What happens if pointer is uninitialized?

---

# 📌 Important Interview Questions

## Q1. Why int pointer increments by 4?

Because:
integer size is usually 4 bytes.

---

## Q2. Difference between ptr and *ptr?

| Expression | Meaning          |
| ---------- | ---------------- |
| ptr        | Address          |
| *ptr       | Value at address |

---

# 🚀 Conclusion

Integer Pointers are essential for:

* memory handling
* arrays
* functions
* advanced C programming
