# Theory - If Else Statement in C

## Introduction

The `if-else` statement is used when there are two possible outcomes.

If the condition is true:

```txt
if block executes
```

If the condition is false:

```txt
else block executes
```

---

## Syntax

```c
if(condition)
{
    // code
}
else
{
    // code
}
```

---

## Working of If Else Statement

### Step 1

Condition is checked.

### Step 2

If condition is true:

```txt
if block executes
```

### Step 3

If condition is false:

```txt
else block executes
```

---

## Example

```c
int age = 16;

if(age >= 18)
{
    printf("Eligible to Vote");
}
else
{
    printf("Not Eligible");
}
```

Output:

```txt
Not Eligible
```

Because:

```txt
16 >= 18 → False
```

---

## Important Points

- `if` handles true condition
- `else` handles false condition
- Only one block executes

---

## Real Life Example

Login system:

```txt
If password correct → Login
Else → Access denied
```

---

## Conclusion

The `if-else` statement helps programs make decisions based on conditions.