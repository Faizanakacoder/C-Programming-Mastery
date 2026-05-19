# Theory of Nested For Loop in C

---

# 📖 Definition

A **Nested For Loop** means:

```txt
A for loop inside another for loop
```

It is used when multiple repetitions are needed.

---

# 🏗 General Syntax

```c
for(initialization; condition; update)
{
    for(initialization; condition; update)
    {
        statements;
    }
}
```

---

# 🔍 Understanding Structure

### Outer Loop

Controls:

```txt
Rows
```

Example:

```c
for(i = 1; i <= 3; i++)
```

---

### Inner Loop

Controls:

```txt
Columns
```

Example:

```c
for(j = 1; j <= 5; j++)
```

---

# ⚙ Working Process

Example:

```c
for(i = 1; i <= 3; i++)
{
    for(j = 1; j <= 5; j++)
    {
        printf("*");
    }

    printf("\n");
}
```

### Iteration 1

```txt
Row 1 starts
Inner loop runs 5 times
*****
```

### Iteration 2

```txt
Row 2 starts
*****
```

### Iteration 3

```txt
Row 3 starts
*****
```

---

# 🔥 Important Characteristics

## 1. Multiple Loops

Contains:

```txt
Loop inside loop
```

---

## 2. Row and Column Logic

```txt
Outer → Rows
Inner → Columns
```

---

## 3. Pattern Printing

Most useful for:

```txt
Stars
Numbers
Alphabets
Shapes
```

---

# ⚠ Common Mistakes

## Forgetting New Line

Wrong:

```c
printf("*");
```

Without:

```c
printf("\n");
```

Pattern becomes messy.

---

## Wrong Loop Limit

Example:

Wrong:

```c
j <= i
```

when rectangle needed.

---

# 🧠 When to Use Nested For Loop?

Use when:

✔ Pattern printing  
✔ Matrix programs  
✔ Tables  
✔ Multi-dimensional repetition

---

# 🏁 Conclusion

Nested for loop is one of the most important concepts for programming logic building.