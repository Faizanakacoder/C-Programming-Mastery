# Theory - If Statement in C

## Introduction

The `if` statement is a decision-making statement.

It checks a condition and executes code only if the condition is true.

---

## Syntax

```c
if(condition)
{
    // code to execute
}
```

---

## Working of If Statement

### Step 1

Condition is checked.

### Step 2

If condition is true:

```txt
Code inside if block executes
```

### Step 3

If condition is false:

```txt
Block is skipped
```

---

## Example

```c
int age = 20;

if(age >= 18)
{
    printf("Eligible to Vote");
}
```

Output:

```txt
Eligible to Vote
```

Because:

```txt
20 >= 18 → True
```

---

## Important Points

- `if` works only when condition is true
- Curly braces `{}` contain the block of code
- Condition returns true or false

---

## Real Life Example

ATM withdrawal:

```txt
If balance is sufficient,
money is withdrawn.
```

---

## Conclusion

The `if` statement is used to execute code conditionally in C.