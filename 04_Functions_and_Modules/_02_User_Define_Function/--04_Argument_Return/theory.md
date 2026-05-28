# 📖 04. Argument with Return Value Function (Theory)

---

## 🧠 Definition

A function that:

✔ Accepts input values (arguments)  
✔ Processes data inside function  
✔ Returns a value using `return` keyword  

is called:

👉 Argument with Return Value Function

---

## ⚙️ Working Principle

1. Function is called with arguments  
2. Values are passed to parameters  
3. Function performs processing  
4. Result is returned to main function  
5. Main stores or prints returned value  

---

## 🔄 Execution Flow

```
main() → function call (arguments) → processing → return value → main()
```

---

## 📊 Characteristics

| Feature | Description |
|--------|-------------|
| Arguments | Yes |
| Return Value | Yes |
| Output | Returned to main |
| Flexibility | High |

---

## 💡 Real-Life Analogy

Calculator 📱:

- Input = numbers  
- Process = calculation  
- Output = result returned  

---

## 🧾 Example Concept

```c
int add(int a, int b)
{
    return a + b;
}
```

---

## ⚡ Advantages

✔ Reusable code  
✔ Easy debugging  
✔ Best for problem solving  
✔ Clean modular structure  

---

## ❌ Disadvantages

❌ Slight learning curve for beginners  
❌ Requires understanding of flow  

---

## 🎯 Important Points

✔ Must have return type  
✔ Must use parameters  
✔ Must return value  
✔ Must store returned value  

---

## 🧠 Dry Run Example

```c
add(5, 10)
```

### Execution:
- a = 5, b = 10  
- sum = 15  
- returned to main  
- stored in variable