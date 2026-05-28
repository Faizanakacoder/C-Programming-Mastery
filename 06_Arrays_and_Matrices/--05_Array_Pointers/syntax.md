# 📘 Array with Pointers - Syntax

---

## 📌 Pointer Declaration

int *p;

---

## 📌 Assign Array Address

p = arr;

OR

p = &arr[0];

---

## 📌 Access Elements

*(p + i)

---

## 📌 Loop Traversal

for(i = 0; i < size; i++)
{
    printf("%d", *(p + i));
}

---

## 📌 Key Rules

- Array name is pointer
- Pointer moves in memory blocks
- Must match data type size

---

## 🚀 Summary

Pointer + array = **direct memory access system**