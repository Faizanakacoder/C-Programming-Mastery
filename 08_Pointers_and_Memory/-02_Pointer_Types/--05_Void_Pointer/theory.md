# 📘 Void Pointer - Theory

---

# 📌 What is Void Pointer?

A Void Pointer is a pointer that:
can store address of any datatype.

Syntax:

void *ptr;

---

# 📌 Example

int num = 10;

void *ptr = #

Here:

ptr stores:
address of integer variable.

---

# 📌 Why Void Pointer is Called Generic Pointer?

Because:
it can work with multiple datatypes.

Example:

void *ptr;

ptr can store:

* int address
* float address
* char address

---

# 📌 Typecasting in Void Pointer

Void pointer cannot be directly dereferenced.

Typecasting is required.

Example:

printf("%d", *(int *)ptr);

---

# 📌 Internal Working

Suppose:

num stored at:
1000

ptr stores:
1000

Before accessing value:
datatype must be specified.

---

# 📊 Memory Representation

| Variable | Address | Value |
| -------- | ------- | ----- |
| num      | 1000    | 10    |
| ptr      | 2000    | 1000  |

---

# 📌 Void Pointer with Different Datatypes

Example:

float f = 10.5;

ptr = &f;

Example:

char ch = 'A';

ptr = &ch;

---

# 📌 Void Pointer with malloc()

malloc() returns:
void pointer.

Example:

ptr = malloc(sizeof(int));

---

# 🌍 Real Life Analogy

Think of void pointer like:
an empty container.

It can store:
any type of object.

But before use:
object type must be identified.

---

# 📌 Advantages

✅ Generic programming
✅ Flexible memory handling
✅ Useful in dynamic allocation
✅ Code reusability

---

# ❌ Disadvantages

❌ Cannot dereference directly
❌ Requires typecasting
❌ Type mismatch may cause errors

---

# 🧪 Dry Run Example

Code:

int x = 10;

void *ptr = &x;

Execution:

ptr stores:
address of x

Typecasting:

(int *)ptr

Dereferencing:

*(int *)ptr

returns:
10

---

# 🎯 Viva Questions

1. What is void pointer?
2. Why typecasting is needed?
3. What is generic pointer?
4. Can void pointer be dereferenced directly?
5. Why malloc returns void pointer?

---

# 📌 Important Interview Questions

## Q1. Why void pointer cannot be dereferenced directly?

Because:
compiler does not know datatype size.

---

## Q2. Difference between void pointer and NULL pointer?

| Void Pointer    | NULL Pointer  |
| --------------- | ------------- |
| Generic pointer | Empty pointer |

---

# 🚀 Conclusion

Void Pointers are important for:

* dynamic memory
* generic programming
* advanced system programming
