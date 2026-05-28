# 📘 Arrays in C - Syntax

---

## 📌 1D Array Syntax

data_type array_name[size];

Example:
int arr[5];

---

## 📌 Initialization

int arr[5] = {1, 2, 3, 4, 5};

---

## 📌 Accessing Elements

arr[index];

Example:
printf("%d", arr[0]);

---

## 📌 2D Array Syntax

data_type array[row][column];

Example:
int arr[3][3];

---

## 📌 Initialization (2D)

int arr[2][2] = {
    {1, 2},
    {3, 4}
};

---

## 📌 Traversing Array

for(i = 0; i < n; i++)
{
    printf("%d", arr[i]);
}

---

## 📌 Key Rules

- Index starts from 0
- Size must be defined
- Same data type only
- Stored in continuous memory

---

## 🚀 Summary

Arrays are accessed using **index-based memory addressing system**.