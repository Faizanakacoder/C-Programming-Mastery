# Theory - Logical Operators in C

## Introduction

Logical operators are used to combine multiple conditions.

They are mostly used with decision-making statements.

Logical operators return:

- `1` → True
- `0` → False

---

## Types of Logical Operators

### 1. Logical AND (&&)

Returns true only if both conditions are true.

Example:

```c
a > b && a > c
```

---

### 2. Logical OR (||)

Returns true if at least one condition is true.

Example:

```c
a > b || a > c
```

---

### 3. Logical NOT (!)

Reverses the condition result.

Example:

```c
!(a > b)
```

---

## Truth Table

### Logical AND (&&)

| Condition 1 | Condition 2 | Result |
|-------------|-------------|--------|
| True | True | True |
| True | False | False |
| False | True | False |
| False | False | False |

---

### Logical OR (||)

| Condition 1 | Condition 2 | Result |
|-------------|-------------|--------|
| True | True | True |
| True | False | True |
| False | True | True |
| False | False | False |

---

## Importance of Logical Operators

- Used in conditions
- Helps decision making
- Used with `if`, `while`, loops

---

## Conclusion

Logical operators are used to combine conditions and make decisions in C programs.