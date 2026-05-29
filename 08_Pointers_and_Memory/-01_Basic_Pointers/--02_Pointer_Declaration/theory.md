# 📘 Pointer Declaration - Theory

---

# 📌 What is Pointer Declaration?

Pointer declaration means:
creating a pointer variable capable of storing memory addresses.

Example:

int *p;

Here:
p is a pointer variable.

---

# 📌 Why Pointer Declaration is Needed?

Pointers must be declared so the compiler knows:

* pointer type
* memory size
* compatible address type

Without declaration:
the compiler cannot identify pointer behavior.

---

# 📌 Syntax of Pointer Declaration

datatype *pointer_name;

Example:

int *p;

---

# 📌 Integer Pointer

Stores address of integer variable.

Example:

int x = 10;

int *p = &x;

---

# 📌 Character Pointer

Stores address of character variable.

Example:

char ch = 'A';

char *ptr = &ch;

---

# 📌 Float Pointer

Stores address of float variable.

Example:

float num = 10.5;

float *fp = #

---

# 📌 Double Pointer

Stores address of double variable.

Example:

double d = 15.75;

double *dp = &d;

---

# 📌 Internal Working

Code:

int x = 50;

int *p = &x;

Suppose:

x stored at:
1000

Then:

p stores:
1000

---

# 📊 Memory Representation

| Variable | Value        |
| -------- | ------------ |
| x        | 50           |
| p        | Address of x |

---

# 📌 Multiple Pointer Declaration

Example:

int *p1, *p2;

Both:
p1 and p2 are pointers.

---

# 📌 Important Rule

Pointer type should match:
variable type.

Correct:

int *p;

Wrong:

float *p = &x;

---

# 🌍 Real Life Analogy

Think of pointer declaration like:
creating a container specially designed for storing addresses.

---

# 📌 Advantages

✅ Safe memory access
✅ Organized programming
✅ Better compiler checking
✅ Efficient address handling

---

# ❌ Disadvantages

❌ Type mismatch errors
❌ Invalid memory access if misused

---

# 🧪 Dry Run Example

Code:

int x = 100;

int *p = &x;

Execution:

x value:
100

x address:
1000

p stores:
1000

---

# 🎯 Viva Questions

1. What is pointer declaration?
2. Why pointer type matters?
3. What is integer pointer?
4. What is character pointer?
5. Can pointer type mismatch occur?

---

# 📌 Important Interview Questions

## Q1. Difference between int and int * ?

| int          | int *          |
| ------------ | -------------- |
| Stores value | Stores address |

---

## Q2. Why datatype is required in pointer declaration?

Because:
compiler must know memory interpretation.

---

# 🚀 Conclusion

Pointer Declaration is essential for:

* proper memory handling
* safe programming
* advanced pointer concepts
