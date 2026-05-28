# 📖 Recursion in C Programming (Theory)

---

## 🧠 Definition

Recursion is a technique in which a function calls itself directly or indirectly to solve a problem.

---

## ⚙️ How Recursion Works

Every recursive function has:

### 1️⃣ Base Condition
- Stops recursion
- Prevents infinite loop

### 2️⃣ Recursive Call
- Function calls itself with smaller input

---

## 🔄 Execution Flow

```
Function Call → Function Calls Itself → Stack Memory Builds → Base Condition → Stack Unwinds
```

---

## 🧱 Stack Memory Concept

Each function call is stored in stack memory.

Example:
```
fact(5)
→ fact(4)
→ fact(3)
→ fact(2)
→ fact(1)
```

Then returns back:
```
1 → 2 → 6 → 24 → 120
```

---

## 📊 Characteristics

| Feature | Description |
|--------|-------------|
| Function calls itself | Yes |
| Needs base condition | Mandatory |
| Uses stack memory | Yes |
| Alternative to loops | Yes |

---

## 💡 Real Life Analogy

📚 Russian Dolls (Matryoshka)

- Each doll contains a smaller doll
- Until the smallest doll is reached

Same concept → recursion

---

## ⚡ Advantages

✔ Simple code for complex problems  
✔ Reduces loops  
✔ Easy to understand logic  
✔ Used in advanced algorithms  

---

## ❌ Disadvantages

❌ Uses more memory (stack)  
❌ Slower than loops sometimes  
❌ Risk of infinite recursion  

---

## 🎯 Important Concepts

✔ Base condition is MUST  
✔ Without base condition → infinite loop  
✔ Each call must move toward base case  
✔ Stack overflow can occur  

---

## 🧠 Dry Run Example (Factorial)

```
fact(3)
= 3 * fact(2)
= 3 * 2 * fact(1)
= 3 * 2 * 1
= 6
```

---

## 🏁 Conclusion

Recursion is a powerful technique where a problem is solved by breaking it into smaller sub-problems until the base condition is reached.