# Theory - Conditional Operator in C

## Introduction

The conditional operator is used to make decisions in a program.

It is called a **Ternary Operator** because it uses three operands.

Syntax:

```c
condition ? expression1 : expression2;
```

If condition is true:

```txt
expression1 executes
```

If condition is false:

```txt
expression2 executes
```

---

## Example

```c
age >= 18 ? printf("Eligible") : printf("Not Eligible");
```

---

## Working of Conditional Operator

### Step 1

Condition is checked.

### Step 2

If true:

```txt
First expression executes
```

### Step 3

If false:

```txt
Second expression executes
```

---

## Difference Between if-else and Conditional Operator

### Using if-else

```c
if(age >= 18)
{
    printf("Eligible");
}
else
{
    printf("Not Eligible");
}
```

### Using Conditional Operator

```c
age >= 18 ? printf("Eligible") : printf("Not Eligible");
```

---

## Advantages

- Short code
- Easy decision making
- Cleaner syntax

---

## Conclusion

The conditional operator is a shortcut method of `if-else` in C.