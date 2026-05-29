# 📘 Function Pointer - Theory

---

# 📌 What is Function Pointer?

A function pointer is a pointer that stores:
address of a function.

---

# 📌 Example

int add(int a, int b)
{
return a + b;
}

int (*ptr)(int, int) = add;

---

# 📌 How it Works

Function exists in memory like data.

So pointer stores:
function entry address.

---

# 📌 Calling Function using Pointer

result = ptr(10, 20);

OR

result = (*ptr)(10, 20);

---

# 📊 Memory Concept

| Element       | Meaning                 |
| ------------- | ----------------------- |
| function name | address of function     |
| pointer       | stores function address |
| call          | executes function       |

---

# 🎯 Why Used?

✔ Dynamic behavior
✔ Callback systems
✔ Reusable code logic

---

# 🌍 Real Life Analogy

Think:

📞 Phone number = function address
📱 Dialing = function call

---

# ⚠️ Limitations

❌ Complex syntax
❌ Hard for beginners
