# 📘 Float Pointer - Theory

---

# 📌 What is Float Pointer?

A Float Pointer is a pointer variable that:
stores address of a float variable.

Syntax:

float *ptr;

---

# 📌 Example

float num = 12.5;

float *ptr = #

Here:

| Variable | Meaning                 |
| -------- | ----------------------- |
| num      | Float variable          |
| ptr      | Float pointer           |
| &num     | Address of num          |
| *ptr     | Value stored at address |

---

# 📌 Internal Working

Suppose:

num stored at:
1000

Value:
12.5

Then:

ptr stores:
1000

Using:

*ptr

returns:
12.5

---

# 📊 Memory Representation

| Variable | Address | Value |
| -------- | ------- | ----- |
| num      | 1000    | 12.5  |
| ptr      | 2000    | 1000  |

---

# 📌 Dereferencing Float Pointer

Dereferencing means:
accessing actual float value.

Example:

printf("%.2f", *ptr);

---

# 📌 Modifying Float Value

Example:

*ptr = 55.5;

Now:

num becomes:
55.5

---

# 📌 Float Pointer Arithmetic

Float pointer increments by:
4 bytes normally.

Because:
float datatype size is usually 4 bytes.

---

# 📌 Float Pointer with Arrays

Example:

float arr[3] = {1.1,2.2,3.3};

float *ptr = arr;

Pointer accesses float array elements.

---

# 📌 Float Pointer with Functions

Example:

display(&num);

Functions can access:
original float value.

---

# 🌍 Real Life Analogy

Think of float pointer like:
a map location for decimal data.

Pointer knows:
where decimal value exists in memory.

---

# 📌 Advantages

✅ Efficient decimal handling
✅ Useful in scientific programs
✅ Fast memory access
✅ Important in graphics calculations

---

# ❌ Disadvantages

❌ Incorrect format specifier causes issues
❌ Invalid pointers may crash program

---

# 🧪 Dry Run Example

Code:

float x = 10.5;

float *p = &x;

Execution:

x stored at:
1000

p stores:
1000

*p gives:
10.5

---

# 🎯 Viva Questions

1. What is float pointer?
2. Why float pointer increments by 4 bytes?
3. What is dereferencing?
4. Why `%f` is used?
5. What happens if pointer is uninitialized?

---

# 📌 Important Interview Questions

## Q1. Difference between int pointer and float pointer?

| Int Pointer        | Float Pointer        |
| ------------------ | -------------------- |
| Stores int address | Stores float address |

---

## Q2. Why float pointer arithmetic jumps by 4 bytes?

Because:
float datatype size is usually 4 bytes.

---

# 🚀 Conclusion

Float Pointers are important for:

* scientific computing
* engineering applications
* graphics programming
* advanced C programming
