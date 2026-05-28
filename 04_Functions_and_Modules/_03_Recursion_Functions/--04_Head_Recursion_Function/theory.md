# 📖 Head Recursion (Theory)

---

## 🧠 Definition

Head recursion is a type of recursion where:

✔ Recursive call is made FIRST  
✔ Processing happens AFTER returning  

---

## ⚙️ Working Principle

1. Function is called  
2. Recursive call executes first  
3. Function waits (stack build-up)  
4. After base condition → execution returns  
5. Work is performed during unwinding  

---

## 🔄 Execution Flow

```
call()
  ↓
call()
  ↓
call()
  ↓
base condition
  ↑
process
  ↑
process
```

---

## 🧱 Stack Behavior

✔ All calls stored in stack  
✔ No output until base condition  
✔ Processing starts during return phase  

---

## 📊 Characteristics

| Feature | Head Recursion |
|--------|----------------|
| Recursive call | First statement |
| Processing | After return |
| Output order | Reverse-like |
| Stack usage | High |

---

## 💡 Real Life Analogy

📚 Climbing stairs:

- You go up without doing anything  
- Then while coming down, you count steps  

---

## ⚡ Advantages

✔ Useful for reverse processing  
✔ Helps in tree traversal  
✔ Good for backtracking logic  

---

## ❌ Disadvantages

❌ Uses more stack memory  
❌ Harder to visualize  
❌ Not optimized like tail recursion  

---

## 🧠 Dry Run Example

```
head(3)
→ head(2)
→ head(1)
→ stop

return phase:
1
2
3
```

---

## 🏁 Conclusion

Head recursion performs recursive calls first and executes logic while returning, making it useful for reverse-order problems.