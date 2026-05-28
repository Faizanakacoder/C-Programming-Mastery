# 📖 Indirect Recursion (Theory)

---

## 🧠 Definition

Indirect recursion is a process where:

✔ Function A calls Function B  
✔ Function B calls Function A  

This creates a recursive cycle.

---

## ⚙️ Working Principle

1. Function A is called  
2. A calls B  
3. B performs operation  
4. B calls A again  
5. Cycle continues until base condition  

---

## 🔄 Execution Flow

```
A() → B() → A() → B() → ... → Base Condition → Stop
```

---

## 🧱 Stack Memory Concept

Each function call is stored in stack:

```
A → B → A → B
```

Then execution returns backward:

```
B → A → return values
```

---

## 📊 Characteristics

| Feature | Description |
|--------|-------------|
| Multiple functions | Yes |
| Direct self-call | No |
| Complexity | Medium |
| Cycle behavior | Yes |

---

## 💡 Real Life Analogy

📞 Two friends calling each other repeatedly:

- A calls B  
- B calls A  
- Conversation continues until someone stops  

---

## ⚡ Advantages

✔ Useful in complex systems  
✔ Helps in state-based logic  
✔ Good for modular design  

---

## ❌ Disadvantages

❌ Hard to debug  
❌ Risk of infinite loop  
❌ Complex flow tracking  

---

## 🎯 Important Points

✔ Must have base condition  
✔ At least two functions required  
✔ Must control function switching  
✔ Without stopping condition → crash  

---

## 🧠 Dry Run Example

```
A(3)
→ B(3)
→ A(2)
→ B(2)
→ A(1)
→ STOP
```

---

## 🏁 Conclusion

Indirect recursion is a cyclic function calling technique where functions call each other until a base condition stops execution.