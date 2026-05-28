# 📘 External Module - Theory

---

## 📌 What is extern?

`extern` is a keyword in C used to declare a variable or function that is defined in another file.

---

## 🧠 How extern Works

- Variable is defined in one file
- Declared using extern in another file
- Both files share same memory location

---

## ⚙️ Working Flow

1. Variable defined in file1.c
2. Declared using extern in file2.c
3. Compiler links both files
4. Same memory is shared

---

## 📊 Example Concept

file1.c → int x = 10;

file2.c → extern int x;

Now file2 can access x

---

## 🌍 Real Life Example

- One notice board (global data)
- Many departments read it
- No duplication of information

---

## 📌 Advantages

✔ Data sharing between files  
✔ Memory efficiency  
✔ Clean modular structure  
✔ Used in large projects  

---

## ❌ Disadvantages

❌ Risk of data misuse  
❌ Hard debugging if overused  
❌ Breaks encapsulation  

---

## 🎯 Interview Questions

- What is extern keyword?
- Difference between extern and static?
- Can extern variable be redefined?
- How memory works in extern?

---

## 🚀 Conclusion

External module is essential for **multi-file communication and global data sharing in C programming**.