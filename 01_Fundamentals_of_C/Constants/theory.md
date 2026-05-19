# Theory - Constants in C

## Introduction

A constant is a fixed value that does not change during the execution of a program.

Constants improve program readability and reliability.

Example:

```c
const float PI = 3.14;
```

---

## Why Use Constants?

Constants are used to:

- Store fixed values
- Improve readability
- Prevent accidental changes
- Make programs easier to maintain

---

## Types of Constants

### 1. Integer Constants

Integer constants are whole numbers without decimal points.

Examples:

```c
10
50
100
```

---

### 2. Floating Point Constants

Floating point constants contain decimal values.

Examples:

```c
10.5
25.75
```

---

### 3. Character Constants

Character constants are enclosed inside single quotes.

Examples:

```c
'A'
'B'
```

---

### 4. String Constants

String constants are enclosed inside double quotes.

Examples:

```c
"Hello"
"Welcome"
```

---

## const Keyword

The `const` keyword is used to create a constant variable.

Syntax:

```c
const data_type variable_name = value;
```

Example:

```c
const int age = 18;
```

The value cannot be changed later.

---

## Advantages of Constants

- Prevents accidental modification
- Improves readability
- Makes code maintainable
- Helps store fixed values

---

## Real Life Example

The value of PI (3.14) never changes.

So, instead of writing `3.14` repeatedly, we use:

```c
const float PI = 3.14;
```

---

## Conclusion

Constants are fixed values that improve code quality and program stability.