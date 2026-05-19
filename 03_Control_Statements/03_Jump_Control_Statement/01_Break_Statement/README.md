# Break Statement in C

<div align="center">

## ⛔ Controlling Loop Execution Using Break Statement

**Topic:** Jump Statements  
**Category:** Control Statements  
**Level:** Beginner to Intermediate

</div>

---

# 📖 Introduction

The **break statement** in C programming is used to:

```txt
Immediately terminate a loop
```

or

```txt
Exit a switch statement
```

When the compiler encounters a `break` statement:

```txt
Program exits the current loop immediately
```

without executing remaining iterations.

---

# 🧠 Why Do We Use Break Statement?

Suppose:

- User wants to exit a menu
- Required number found
- Invalid condition occurs
- Search completed
- Game should stop

Instead of continuing unnecessary execution:

```txt
Use break statement
```

---

# 🏗 Syntax of Break Statement

## Inside Loop

```c
break;
```

---

## Example

```c
for(i = 1; i <= 10; i++)
{
    if(i == 5)
    {
        break;
    }

    printf("%d\n", i);
}
```

Output:

```txt
1
2
3
4
```

Loop stops when:

```txt
i becomes 5
```

---

# ⚙ Working of Break Statement

### Step 1

Loop executes normally.

### Step 2

Condition checks.

### Step 3

If break condition becomes true:

```txt
Loop immediately stops
```

---

# 🔄 Flow of Break Statement

```txt
Loop Starts
      ↓
Condition Check
      ↓
Break Condition True ?
      ↓
Yes → Exit Loop
No  → Continue Loop
```

---

# 🌍 Real Life Example

### Searching Student Roll Number

Suppose:

```txt
Student found at Roll No 5
```

No need to search further.

Program can:

```txt
break the loop
```

---

# 📂 Files Included

| File Name | Description |
|------------|-------------|
| README.md | Topic overview |
| theory.md | Detailed theory |
| notes.md | Quick revision |
| syntax.c | Basic syntax |
| example1.c | Stop at Number 5 |
| example2.c | Exit Even Numbers |
| example3.c | Stop Multiplication Table |
| example4.c | Break in While Loop |
| example5.c | Break in Do While |
| example6.c | Menu Exit Program |
| example7.c | Find Number |
| example8.c | Break in Switch Statement |

---

# 🎯 Learning Outcomes

After completing this topic, you will understand:

✅ What break statement is  
✅ How break works  
✅ Loop termination  
✅ Switch statement exit  
✅ Practical break logic

---

# 🏁 Conclusion

The `break statement` is useful when:

```txt
Immediate exit is required
```

It improves:

```txt
Efficiency
Program control
Logic building
```