# 📘 Array with Pointers - Theory

---

## 📌 What is Array with Pointer?

An array name acts as a pointer to the first element.

Example:
int arr[5];
arr == &arr[0]

---

## 🧠 Pointer Arithmetic

If:
p = arr;

Then:
p + 1 → next element
p + 2 → third element

---

## ⚙️ Memory Concept

arr[0] → *p  
arr[1] → *(p+1)  
arr[2] → *(p+2)

---

## 📊 How It Works

- Array stored in continuous memory
- Pointer moves step-by-step
- Each step depends on data type size

---

## 🌍 Real Life Example

- Row of seats in cinema
- Pointer = moving seat number
- Array = full row

---

## 📌 Advantages

✔ Fast access  
✔ Efficient memory usage  
✔ Core of data structures  

---

## ❌ Disadvantages

❌ Easy to misuse pointers  
❌ Can cause segmentation faults  

---

## 🎯 Interview Questions

- Difference between array and pointer?
- What is pointer arithmetic?
- Why array name is pointer?
- Can pointer modify array?

---

## 🚀 Conclusion

Array with pointers is **foundation of memory-level programming in C**.