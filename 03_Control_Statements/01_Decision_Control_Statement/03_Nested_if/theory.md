# Theory - Nested If Statement in C

## Introduction

A nested if statement means:

```txt
If statement inside another if statement
```

It is used when multiple conditions must be checked.

---

## Syntax

```c
if(condition1)
{
    if(condition2)
    {
        // code
    }
}
```

---

## Working of Nested If

### Step 1

First condition is checked.

### Step 2

If first condition is true:

```txt
Second if condition executes
```

### Step 3

If second condition is true:

```txt
Code executes
```

---

## Example

```c
int age = 20;
int citizen = 1;

if(age >= 18)
{
    if(citizen == 1)
    {
        printf("Eligible to Vote");
    }
}
```

Output:

```txt
Eligible to Vote
```

---

## Important Points

- One `if` inside another `if`
- Used for multiple conditions
- Executes step by step

---

## Real Life Example

ATM System:

```txt
If card valid
    If PIN correct
        Access Granted
```

---

## Conclusion

Nested if statements are used for checking multiple conditions in sequence.