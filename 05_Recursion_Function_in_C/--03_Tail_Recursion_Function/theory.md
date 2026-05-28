# 📖 Tail Recursion (Theory)

---

## 🧠 Definition

A function is said to be **tail recursive** when:

✔ The recursive call is the last statement  
✔ No computation is performed after recursion  

---

## ⚙️ Working Principle

1. Function executes statements  
2. Calls itself at the end  
3. No pending operation after call  
4. Stack frames can be optimized  

---

## 🔄 Execution Flow

```
function()
   |
   |--> function()
           |
           |--> function()
```

Stops when base condition is met.

---

## 🧱 Stack Behavior

In tail recursion:

✔ Current function is replaced  
✔ No extra stack usage after call  
✔ Can be optimized into loop  

---

## 📊 Characteristics

| Feature | Tail Recursion |
|--------|----------------|
| Recursive call position | Last statement |
| Extra work after call | No |
| Stack usage | Optimizable |
| Performance | Efficient |

---

## 💡 Real Life Analogy

🏁 A finishing line runner:

- Runs → finishes → stops immediately  
- No extra action after finishing  

---

## ⚡ Advantages

✔ Memory efficient  
✔ Faster execution (with optimization)  
✔ Easy to convert into loops  

---

## ❌ Disadvantages

❌ Harder for beginners  
❌ Not supported optimization in all compilers  
❌ Debugging recursion flow is still tricky  

---

## 🎯 Important Points

✔ Base condition is mandatory  
✔ Recursive call must be last statement  
✔ No operation after recursion  
✔ Can replace loops in many cases  

---

## 🧠 Dry Run Example

```
fact(5)
→ fact(4)
→ fact(3)
→ fact(2)
→ fact(1)
→ stop
```

---

## 🏁 Conclusion

Tail recursion is the most optimized form of recursion where the function calls itself as the final operation.