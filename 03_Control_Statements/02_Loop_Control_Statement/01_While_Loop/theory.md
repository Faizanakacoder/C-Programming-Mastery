# Theory - While Loop in C

## Introduction

The `while` loop is a looping statement.

It repeatedly executes a block of code as long as the condition remains true.

---

## Syntax

```c
while(condition)
{
    // code
}
```

---

## Working of While Loop

### Step 1

Condition is checked.

### Step 2

If condition is true:

```txt
Loop executes
```

### Step 3

Condition checks again.

### Step 4

Loop stops when condition becomes false.

---

## Example

```c
int i = 1;

while(i <= 5)
{
    printf("%d\n", i);
    i++;
}
```

Output:

```txt
1
2
3
4
5
```

---

## Important Points

- Entry-controlled loop
- Condition checks first
- May execute zero times
- Can become infinite loop

---

## Infinite Loop Example

```c
while(1)
{
    printf("Infinite Loop");
}
```

---

## Real Life Example

ATM PIN checking:

```txt
While PIN is incorrect
Ask again
```

---

## Conclusion

The while loop repeats code execution while a condition is true.