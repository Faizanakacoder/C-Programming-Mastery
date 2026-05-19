# Nested For Loop in C

<div align="center">

## 🔁 Nested Repetition Using For Loop in C

**Topic:** Control Statements  
**Category:** Looping Statements  
**Level:** Beginner to Intermediate

</div>

---

# 📖 Introduction

A **Nested For Loop** means:

```txt
One for loop inside another for loop
```

It is mainly used for:

- Pattern Printing
- Tables
- Matrix Operations
- 2D Structures
- Grid-based Logic

In nested loops:

```txt
Outer Loop → Controls rows
Inner Loop → Controls columns
```

---

# 🧠 Why Do We Use Nested For Loop?

Suppose you want to print:

```txt
*****
*****
*****
```

A single loop cannot easily handle rows and columns.

So we use:

```txt
Nested For Loop
```

where:

```txt
Outer loop → Row repetition
Inner loop → Column repetition
```

---

# 🏗 Syntax of Nested For Loop

```c
for(initialization; condition; update)
{
    for(initialization; condition; update)
    {
        // code
    }
}
```

---

# ⚙ Working of Nested For Loop

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

### Execution Flow

### Outer Loop

Runs:

```txt
3 times
```

### Inner Loop

Runs:

```txt
5 times for every row
```

Output:

```txt
*****
*****
*****
```

---

# 🔄 Flow of Nested Loop

```txt
Outer Loop Start
        ↓
Inner Loop Start
        ↓
Execute Inner Loop
        ↓
Inner Loop Ends
        ↓
Move to Next Row
        ↓
Repeat
```

---

# 🌍 Real Life Example

Classroom Seating:

```txt
Rows → Students row
Columns → Seats
```

Example:

```txt
5 Rows × 4 Columns
```

---

# 📂 Files Included

| File Name | Description |
|------------|-------------|
| README.md | Topic overview |
| theory.md | Detailed explanation |
| notes.md | Quick revision |
| syntax.c | Basic nested loop syntax |
| example1.c | Square Star Pattern |
| example2.c | Rectangle Pattern |
| example3.c | Number Pattern |
| example4.c | Multiplication Table |
| example5.c | Right Triangle Pattern |
| example6.c | Reverse Triangle |
| example7.c | Alphabet Pattern |
| example8.c | Hollow Rectangle |
| example9.c | Pyramid Pattern |
| example10.c | Multiplication Grid |

---

# 🎯 Learning Outcomes

After completing this topic, you will understand:

✅ Nested loop concept  
✅ Row and column logic  
✅ Pattern printing  
✅ Multiple repetition logic  
✅ Loop inside loop execution

---

# 🏁 Conclusion

Nested for loops are extremely important in C programming.

They are heavily used in:

```txt
Patterns
Matrices
2D Arrays
Games
Problem Solving
```