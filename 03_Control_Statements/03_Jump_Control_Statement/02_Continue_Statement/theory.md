# Theory of Continue Statement in C

---

# 📖 Definition

The **continue statement** is a jump statement used in loops.

It is used to:

```txt
Skip the current iteration and move to next iteration
```

---

# 🏗 Syntax

```c
continue;
```

---

# ⚙ Working

When continue is executed:

1. Remaining statements in loop are skipped
2. Control goes to loop update part
3. Next iteration starts

---

# 🔁 Example

```c
for(i = 1; i <= 5; i++)
{
    if(i == 3)
    {
        continue;
    }

    printf("%d\n", i);
}
```

---

## Output

```txt
1
2
4
5
```

---

# 🔥 Uses of Continue

## 1. Skip unwanted values
```txt
Skip even numbers
```

## 2. Data filtering
```txt
Ignore invalid inputs
```

## 3. Loop optimization
```txt
Avoid unnecessary execution
```

---

# ⚠ Common Mistake

Confusing break and continue:

- break → stops loop
- continue → skips iteration

---

# 🏁 Conclusion

Continue statement improves loop control by skipping unwanted iterations.