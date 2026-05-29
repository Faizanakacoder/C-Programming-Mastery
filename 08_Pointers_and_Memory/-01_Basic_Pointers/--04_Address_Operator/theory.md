# 📘 Address Operator - Theory

---

# 📌 What is Address Operator?

The Address Operator (`&`) returns:
the memory address of a variable.

Example:

int x = 10;

&x

returns:
address of variable x.

---

# 📌 Why Address Operator is Important?

Pointers require addresses.

The address operator helps:
store addresses inside pointers.

Example:

int *p = &x;

Here:
`&x` gives address of x.

---

# 📌 Internal Working

Code:

int x = 50;

Suppose:
x stored at memory location:
1000

Then:

&x returns:
1000

---

# 📊 Memory Representation

| Variable | Address | Value |
| -------- | ------- | ----- |
| x        | 1000    | 50    |

---

# 📌 Address Operator with Pointers

Example:

int x = 10;

int *p = &x;

Meaning:
p stores address of x.

---

# 📌 Address Operator with Arrays

Example:

int arr[5];

arr itself stores:
base address of array.

---

# 📌 Address Operator with Different Data Types

## Integer

int x = 10;

&x

---

## Character

char ch = 'A';

&ch

---

## Float

float num = 5.5;

&num

---

# 📌 Important Rules

✅ Address operator works only with variables
✅ Cannot use & with constants
✅ Used mainly with pointers

---

# ❌ Invalid Usage

Wrong:

&(10)

because:
10 is constant.

---

# 🌍 Real Life Analogy

Think of memory as:
a city.

Variables are:
houses.

Address operator gives:
house address.

---

# 📌 Advantages

✅ Direct memory access
✅ Efficient memory handling
✅ Supports pointer programming
✅ Essential for advanced concepts

---

# ❌ Disadvantages

❌ Confusing for beginners
❌ Wrong usage may cause errors

---

# 🧪 Dry Run Example

Code:

int x = 25;

printf("%u", &x);

Execution:

x stored at:
1000

&x returns:
1000

---

# 🎯 Viva Questions

1. What is address operator?
2. Why & is used?
3. What does &x mean?
4. Can address operator work on constants?
5. Difference between value and address?

---

# 📌 Important Interview Questions

## Q1. Difference between * and & ?

| Symbol | Meaning              |
| ------ | -------------------- |
| &      | Address operator     |
| *      | Dereference operator |

---

## Q2. Why address operator is important for pointers?

Because:
pointers store addresses.

---

# 🚀 Conclusion

The Address Operator is one of the most important concepts in:

* pointers
* memory access
* low-level programming
