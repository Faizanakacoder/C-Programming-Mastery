# 📘 Array with Functions - Syntax

---

## 📌 Function Declaration

void function(int arr[], int size);

---

## 📌 Function Definition

void function(int arr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}

---

## 📌 Function Call

function(arr, size);

---

## 📌 Key Rules

- Array is passed by reference
- No need to pass size pointer
- Base address is passed
- Changes affect original array

---

## 🚀 Summary

Array + function = **modular and reusable code structure**