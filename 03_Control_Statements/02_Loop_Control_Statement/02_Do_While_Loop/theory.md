# Theory of Do While Loop in C

---

# 📖 Definition

A **Do While Loop** is a looping statement in C programming that executes a block of code repeatedly **until a condition becomes false**.

The important feature is:

```txt
The loop executes at least one time.
```

because the condition is checked at the end.

---

# 🏗 General Syntax

```c
do
{
    statements;
}
while(condition);
```

---

# 🔍 Understanding Syntax

### `do`

Starts the loop body.

Example:

```c
do
{
    printf("Hello");
}
```

---

### `while(condition)`

Checks whether the loop should continue.

Example:

```c
while(i <= 10);
```

If condition is:

```txt
True → Repeat
False → Stop
```

---

# ⚙ Working Process

Example:

```c
int i = 1;

do
{
    printf("%d\n", i);
    i++;
}
while(i <= 5);
```

### Step-by-Step Execution

### Iteration 1

```txt
i = 1
Print 1
i becomes 2
Condition true
```

### Iteration 2

```txt
i = 2
Print 2
i becomes 3
Condition true
```

### Iteration 3

```txt
i = 3
Print 3
```

This continues until:

```txt
i > 5
```

Then loop stops.

---

# 🔥 Important Characteristics

## 1. Exit Controlled Loop

Condition checks at end.

---

## 2. Executes At Least Once

Even if condition is false.

Example:

```c
int i = 100;

do
{
    printf("Hello");
}
while(i < 10);
```

Output:

```txt
Hello
```

Because execution happens first.

---

## 3. Useful for Menus

Example:

```txt
1. Start
2. Exit
```

Program keeps repeating until user exits.

---

# ⚠ Common Mistakes

## Forgetting Semicolon

Wrong:

```c
while(i <= 5)
```

Correct:

```c
while(i <= 5);
```

---

## Infinite Loop

Wrong:

```c
int i = 1;

do
{
    printf("%d", i);
}
while(i <= 5);
```

Reason:

```txt
Counter never updates
```

Correct:

```c
i++;
```

---

# 🧠 When to Use Do While Loop?

Use it when:

✔ Execution should happen at least once  
✔ Working with menus  
✔ Taking repeated user input  
✔ Login systems  
✔ ATM/PIN verification

---

# 🏁 Conclusion

The do while loop is powerful for repetitive tasks where at least one execution is required.