# 📘 Pointer Types - Theory

---

# 📌 What are Pointer Types?

Pointers are classified based on:
the datatype whose address they store.

Example:

int *p;

Here:
p is an integer pointer.

---

# 📌 Why Different Pointer Types Exist?

Different datatypes occupy:
different memory sizes.

Examples:

| Datatype | Size    |
| -------- | ------- |
| char     | 1 byte  |
| int      | 4 bytes |
| float    | 4 bytes |

Pointer type tells compiler:
how many bytes should be accessed.

---

# 📌 Types of Pointers

## 1️⃣ Integer Pointer

Stores address of integer variable.

Example:

int x = 10;

int *p = &x;

---

## 2️⃣ Character Pointer

Stores address of character variable.

Example:

char ch = 'A';

char *ptr = &ch;

---

## 3️⃣ Float Pointer

Stores address of float variable.

Example:

float num = 5.5;

float *fp = #

---

## 4️⃣ Double Pointer

Stores address of double datatype.

Example:

double d = 10.55;

double *dp = &d;

---

## 5️⃣ Void Pointer

Generic pointer type.

Can store:
any datatype address.

Example:

void *vp;

---

## 6️⃣ Function Pointer

Stores address of function.

Used for:
callback functions and advanced programming.

---

# 📌 Internal Working

Example:

int x = 100;

int *p = &x;

Suppose:

x stored at:
1000

Then:

p stores:
1000

*p returns:
100

---

# 📊 Pointer Type Representation

| Pointer  | Stores Address Of |
| -------- | ----------------- |
| int *    | Integer           |
| char *   | Character         |
| float *  | Float             |
| double * | Double            |

---

# 🌍 Real Life Analogy

Think of pointers as:
delivery addresses.

Different delivery types require:
different handling instructions.

---

# 📌 Advantages

✅ Type safety
✅ Better memory access
✅ Organized programming
✅ Efficient data handling

---

# ❌ Disadvantages

❌ Wrong type causes errors
❌ Type mismatch problems
❌ Complex for beginners

---

# 🧪 Dry Run Example

Code:

int x = 50;

int *p = &x;

Execution:

x stored at:
1000

p stores:
1000

*p gives:
50

---

# 🎯 Viva Questions

1. What are pointer types?
2. Why pointer datatype matters?
3. What is integer pointer?
4. What is void pointer?
5. Difference between char* and int* ?

---

# 📌 Important Interview Questions

## Q1. Why char pointer increments by 1 byte?

Because:
char size is 1 byte.

---

## Q2. Why int pointer increments by 4 bytes?

Because:
integer size is usually 4 bytes.

---

# 🚀 Conclusion

Pointer Types are essential for:

* datatype handling
* memory access
* advanced C programming
