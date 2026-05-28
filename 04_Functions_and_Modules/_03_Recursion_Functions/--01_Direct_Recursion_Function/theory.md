# 📖 Direct Recursion (Theory)

---

## 🧠 Definition

Direct recursion is a process in which a function calls itself directly to solve a problem.

---

## ⚙️ Working Principle

1. Function is called  
2. It calls itself again  
3. Each call reduces the problem size  
4. Execution stops at base condition  
5. Stack unwinds and result is returned  

---

## 🔄 Execution Flow

```
fun(n)
  ↓
fun(n-1)
  ↓
fun(n-2)
  ↓
...
Base Condition
  ↑
Return values back
```

---

## 🧱 Stack Memory Concept

Each function call is stored in stack memory.

Example (factorial):

```
fact(5)
fact(4)
fact(3)
fact(2)
fact(1)
```

Then returns:

```
1 → 2 → 6 → 24 → 120
```

---

## 📊 Characteristics

| Feature | Description |
|--------|-------------|
| Function calls itself | Yes |
| Complexity | Easy |
| Stack usage | High |
| Base condition | Mandatory |

---

## 💡 Real Life Analogy

📚 Russian Doll system:

- Each doll contains a smaller one  
- Until smallest doll is reached  

Same concept = direct recursion

---

## ⚡ Advantages

✔ Simple logic  
✔ Easy to implement  
✔ Reduces loop usage  
✔ Clean mathematical solutions  

---

## ❌ Disadvantages

❌ High memory usage  
❌ Risk of stack overflow  
❌ Slower than loops sometimes  

---

## 🎯 Important Points

✔ Must have base condition  
✔ Function must reduce input  
✔ Infinite recursion causes crash  
✔ Stack memory is used  

---

## 🧠 Dry Run Example (Factorial)

```
fact(4)
= 4 * fact(3)
= 4 * 3 * fact(2)
= 4 * 3 * 2 * fact(1)
= 24
```

---

## 🏁 Conclusion

Direct recursion is the simplest form of recursion where a function repeatedly calls itself until a stopping condition is reached.