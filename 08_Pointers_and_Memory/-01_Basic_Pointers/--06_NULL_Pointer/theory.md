# 📘 NULL Pointer - Theory

---

# 📌 What is NULL Pointer?

A NULL Pointer is a pointer that:
does not point to any valid memory location.

Example:

int *p = NULL;

Meaning:
p currently stores no valid address.

---

# 📌 Why NULL Pointer is Needed?

Pointers may contain:
garbage addresses if not initialized.

Using such pointers may cause:
❌ crashes
❌ segmentation faults
❌ undefined behavior

NULL pointers help avoid this problem.

---

# 📌 Internal Working

Code:

int *p = NULL;

Here:

p contains:
0

Meaning:
no valid memory location assigned.

---

# 📊 Memory Representation

| Pointer | Stored Value |
| ------- | ------------ |
| p       | NULL / 0     |

---

# 📌 NULL Pointer Checking

Before using pointer:
it should be checked.

Example:

if(p != NULL)

This ensures:
pointer is valid.

---

# 📌 Dereferencing NULL Pointer

Wrong:

printf("%d", *p);

when:

p = NULL;

This causes:
runtime error or crash.

---

# 📌 Difference Between NULL Pointer and Garbage Pointer

| NULL Pointer  | Garbage Pointer         |
| ------------- | ----------------------- |
| Contains NULL | Contains random address |
| Safe          | Dangerous               |
| Predictable   | Unpredictable           |

---

# 📌 NULL Macro

NULL is defined inside:

<stdio.h>

or

<stdlib.h>

Usually:

#define NULL 0

---

# 🌍 Real Life Analogy

Think of NULL pointer like:
an empty house address.

No location exists until assigned.

---

# 📌 Advantages

✅ Safe programming
✅ Prevents invalid memory access
✅ Easier debugging
✅ Better memory handling

---

# ❌ Disadvantages

❌ Dereferencing causes crash
❌ Requires careful checking

---

# 🧪 Dry Run Example

Code:

int *p = NULL;

if(p == NULL)
{
printf("Pointer is NULL");
}

Execution:

Pointer stores:
0

Condition becomes:
true

Output:
Pointer is NULL

---

# 🎯 Viva Questions

1. What is NULL pointer?
2. Why NULL is used?
3. Difference between NULL and garbage pointer?
4. What happens if NULL is dereferenced?
5. How to check NULL pointer?

---

# 📌 Important Interview Questions

## Q1. Is NULL equal to 0?

Internally:
yes.

Conceptually:
NULL means no valid memory address.

---

## Q2. Why professional programmers use NULL?

For:
safe memory handling and debugging.

---

# 🚀 Conclusion

NULL Pointer is a critical concept for:

* memory safety
* pointer handling
* professional C programming
