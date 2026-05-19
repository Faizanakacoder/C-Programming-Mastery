# Do While Loop in C

<div align="center">

## 🔁 Repetition Using Do While Loop in C

**Topic:** Control Statements  
**Category:** Looping Statements  
**Level:** Beginner to Intermediate

</div>

---

# 📖 Introduction

The **Do While Loop** in C programming is used to execute a block of code repeatedly.

It is one of the most important looping statements in C.

Unlike the `while` loop, the **do while loop executes the code at least one time**, even if the condition is false.

This happens because:

```txt
Condition is checked AFTER execution
```

That is why the `do while` loop is called an:

```txt
Exit Controlled Loop
```

---

# 🧠 Why Do We Use Do While Loop?

Suppose you want to:

- Print numbers repeatedly
- Show menus continuously
- Repeat user input
- Run a program until user exits
- Build calculator/menu-driven programs

Instead of writing the same code many times, we use:

```c
do while loop
```

---

# 🏗 Syntax of Do While Loop

```c
do
{
    // code to execute
}
while(condition);
```

---

# ⚙ How Do While Loop Works

The execution flow is:

```txt
Step 1 → Execute code block

Step 2 → Check condition

Step 3 → If condition is true
          Repeat loop

Step 4 → If condition is false
          Stop loop
```

---

# 🔄 Flow of Do While Loop

```txt
Start
   ↓
Execute Code
   ↓
Check Condition
   ↓
True ? ── Yes ──> Repeat
   │
   No
   ↓
Stop
```

---

# 🔥 Difference Between While and Do While Loop

| Feature | While Loop | Do While Loop |
|----------|-------------|----------------|
| Condition Check | Before execution | After execution |
| Execution | May execute zero times | Executes at least once |
| Type | Entry Controlled | Exit Controlled |

### Example

### While Loop

```c
while(i <= 5)
{
    printf("%d", i);
}
```

### Do While Loop

```c
do
{
    printf("%d", i);
}
while(i <= 5);
```

---

# 🌍 Real Life Example

### ATM Machine

Suppose ATM asks for PIN.

Even if user enters wrong PIN:

```txt
System asks at least once
```

This is where:

```txt
do while loop
```

becomes useful.

---

# 📂 Files Included

| File Name | Description |
|------------|-------------|
| README.md | Topic overview |
| theory.md | Detailed theory |
| notes.md | Quick revision notes |
| syntax.c | Basic syntax example |
| example1.c | Print Numbers |
| example2.c | Even Numbers |
| example3.c | Sum of Numbers |
| example4.c | Multiplication Table |
| example5.c | Reverse Countdown |
| example6.c | Odd Numbers |
| example7.c | Factorial |
| example8.c | Menu Driven Program |

---

# 🎯 Learning Outcomes

After completing this topic, you will understand:

✅ What is do while loop  
✅ Syntax and structure  
✅ Exit controlled loop  
✅ Difference between while and do while  
✅ Counter variables  
✅ Loop repetition logic  
✅ Practical programming examples

---

# 🏁 Conclusion

The **Do While Loop** is useful when we want code to execute **at least one time**.

It is mostly used in:

- Menu-driven programs
- Login systems
- User input systems
- Repetitive operations

Mastering loops is essential for becoming strong in **C Programming**.

---

### ⭐ Practice Tip

Try changing:

```txt
Condition
Counter value
Increment/Decrement
```

to understand loops deeply.