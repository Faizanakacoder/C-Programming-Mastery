# For Loop in C

<div align="center">

## 🔁 Repetition Using For Loop in C

**Topic:** Control Statements  
**Category:** Looping Statements  
**Level:** Beginner to Intermediate

</div>

---

# 📖 Introduction

The **For Loop** in C programming is used to execute a block of code repeatedly.

It is mostly used when:

```txt
Number of repetitions is already known
```

The `for loop` is compact because it keeps:

- Initialization
- Condition
- Increment/Decrement

inside a single statement.

---

# 🧠 Why Do We Use For Loop?

Suppose you want to:

- Print numbers from 1 to 100
- Print multiplication tables
- Calculate sums
- Generate patterns
- Work with arrays

Instead of writing repeated code:

```c
printf("1");
printf("2");
printf("3");
```

we use:

```c
for loop
```

---

# 🏗 Syntax of For Loop

```c
for(initialization; condition; update)
{
    // code
}
```

---

# ⚙ Structure of For Loop

### 1. Initialization

Starting point.

Example:

```c
int i = 1;
```

---

### 2. Condition

Checks whether loop should continue.

Example:

```c
i <= 5
```

---

### 3. Update

Changes variable value.

Example:

```c
i++
```

---

# 🔄 Flow of For Loop

```txt
Start
   ↓
Initialization
   ↓
Condition Check
   ↓
True ? ─── Yes ──> Execute Code
   ↑                    ↓
   └──── Update <───────┘

False
   ↓
Stop
```

---

# 🌍 Real Life Example

Attendance counting:

```txt
Check 50 students
```

Instead of repeating code:

```txt
50 times manually
```

we use:

```c
for loop
```

---

# 📂 Files Included

| File Name | Description |
|------------|-------------|
| README.md | Topic overview |
| theory.md | Detailed explanation |
| notes.md | Quick revision |
| syntax.c | Syntax explanation |
| example1.c | Print Numbers |
| example2.c | Even Numbers |
| example3.c | Odd Numbers |
| example4.c | Sum of Numbers |
| example5.c | Multiplication Table |
| example6.c | Reverse Counting |
| example7.c | Factorial |
| example8.c | Square Numbers |
| example9.c | Cube Numbers |
| example10.c | ASCII Characters |

---

# 🎯 Learning Outcomes

After completing this topic, you will understand:

✅ For loop syntax  
✅ Loop execution  
✅ Counter variables  
✅ Increment/Decrement  
✅ Practical repetition logic  
✅ Mathematical looping problems

---

# 🏁 Conclusion

The **for loop** is the most commonly used loop in C programming.

Mastering it is very important because it is heavily used in:

```txt
Arrays
Patterns
DSA
Projects
Problem Solving
```