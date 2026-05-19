# Theory of Break Statement in C

---

# 📖 Definition

The **break statement** is a jump statement in C programming.

It is used to:

```txt
Immediately terminate a loop or switch statement
```

---

# 🏗 General Syntax

```c
break;
```

---

# ⚙ Working of Break Statement

When the compiler encounters:

```c
break;
```

Program immediately:

```txt
Stops current loop
```

and moves to:

```txt
Next statement after loop
```

---

# Example

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

---

## Execution

### Iteration 1

```txt
i = 1
Print 1
```

### Iteration 2

```txt
i = 2
Print 2
```

### Iteration 5

```txt
Condition true
break executes
Loop stops
```

---

# 🔥 Uses of Break Statement

## 1. Exit Loop Early

Example:

```txt
Stop after finding number
```

---

## 2. Exit Switch Case

Example:

```txt
Prevent fall-through
```

---

## 3. Menu Driven Programs

Example:

```txt
Exit option selected
```

---

# ⚠ Common Mistakes

## Forgetting Break in Switch

Wrong:

```c
case 1:
printf("One");
```

Problem:

```txt
Next case also executes
```

Correct:

```c
case 1:
printf("One");
break;
```

---

## Confusing Break with Continue

### break

```txt
Stops loop
```

### continue

```txt
Skips current iteration
```

---

# 🧠 When to Use Break?

Use when:

✔ Value found  
✔ Exit required  
✔ Invalid condition  
✔ Search completed

---

# 🏁 Conclusion

The break statement gives better control over loops and switch statements.