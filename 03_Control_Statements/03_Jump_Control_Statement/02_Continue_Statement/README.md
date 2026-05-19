# Continue Statement in C

<div align="center">

## 🔁 Skipping Current Iteration Using Continue Statement

**Topic:** Jump Statements  
**Category:** Control Statements  
**Level:** Beginner to Intermediate

</div>

---

# 📖 Introduction

The **continue statement** in C is used to:

```txt
Skip the current iteration of a loop
```

and move directly to:

```txt
Next iteration of the loop
```

---

# 🧠 Why Use Continue Statement?

We use continue when:

- Skip specific values
- Ignore invalid input
- Filter data
- Skip even/odd numbers
- Control loop flow

---

# 🏗 Syntax

```c
continue;
```

---

# ⚙ Working of Continue

When `continue` is executed:

```txt
Current iteration stops immediately
Loop jumps to next iteration
```

---

# 🔄 Flow

```txt
Loop Start
    ↓
Condition Check
    ↓
Continue Condition True?
    ↓
Yes → Skip remaining code → Next iteration
No  → Execute remaining code
```

---

# 🌍 Real Life Example

```txt
Printing only odd numbers
Skipping invalid users in login system
Ignoring zero values in calculations
```

---

# 🎯 Key Difference

| break | continue |
|------|----------|
| Ends loop | Skips iteration |
| Stops completely | Continues loop |
| Exit control | Skip control |

---

# 🏁 Conclusion

The continue statement helps in:

```txt
Efficient loop control without stopping execution
```