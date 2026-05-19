# Theory of For Loop in C

---

# 📖 Definition

A **for loop** is a looping statement used to execute code repeatedly for a fixed number of times.

It combines:

```txt
Initialization
Condition
Increment/Decrement
```

in one statement.

---

# 🏗 General Syntax

```c
for(initialization; condition; update)
{
    statements;
}
```

---

# 🔍 Understanding Syntax

### Initialization

Starting point of loop.

Example:

```c
int i = 1;
```

---

### Condition

Checks if loop should continue.

Example:

```c
i <= 5
```

If condition becomes false:

```txt
Loop stops
```

---

### Update

Changes variable value.

Example:

```c
i++
```

or

```c
i--
```

---

# ⚙ Working Process

Example:

```c
for(i = 1; i <= 5; i++)
{
    printf("%d\n", i);
}
```

### Step-by-Step Execution

### Iteration 1

```txt
i = 1
Condition true
Print 1
i becomes 2
```

### Iteration 2

```txt
i = 2
Condition true
Print 2
```

This continues until:

```txt
Condition becomes false
```

---

# 🔥 Important Characteristics

## 1. Entry Controlled Loop

Condition checks first.

---

## 2. Best for Fixed Repetition

Example:

```txt
Print numbers 1–100
```

---

## 3. Compact Syntax

Everything written in one line.

---

# ⚠ Common Mistakes

## Missing Semicolon

Wrong:

```c
for(i = 1 i <= 5 i++)
```

Correct:

```c
for(i = 1; i <= 5; i++)
```

---

## Infinite Loop

Wrong:

```c
for(i = 1; i <= 5;)
```

Reason:

```txt
No update
```

---

# 🧠 When to Use For Loop?

Use when:

✔ Number of repetitions known  
✔ Counting needed  
✔ Table generation  
✔ Arrays traversal  
✔ Pattern printing

---

# 🏁 Conclusion

The for loop is one of the most powerful and frequently used loops in C.