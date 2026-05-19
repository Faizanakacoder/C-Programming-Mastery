# Data Types in C - Quick Notes

## Definition

Data type specifies what kind of data a variable can store in a program.

Example:
- Integer numbers
- Decimal numbers
- Characters

---

## Common Data Types in C

| Data Type | Description | Example |
|------------|-------------|----------|
| int | Stores integer values | 10, 25 |
| float | Stores decimal values | 10.5 |
| char | Stores single character | 'A' |
| double | Stores large decimal values | 12345.6789 |

---

## Syntax

```c
data_type variable_name;
```

Example:

```c
int age = 20;
float marks = 85.5;
char grade = 'A';
double salary = 25000.50;
```

---

## Format Specifiers

| Data Type | Format Specifier |
|-----------|------------------|
| int | %d |
| float | %f |
| char | %c |
| double | %lf |

---

## sizeof() Operator

The `sizeof()` operator is used to check the memory occupied by a data type.

Example:

```c
sizeof(int)
```

---

## Advantages of Data Types

- Helps store different kinds of data
- Saves memory efficiently
- Improves program accuracy
- Makes program organized

---

## Short Summary

Data types define the type of value a variable can store in a C program.

Examples:
`int`, `float`, `char`, `double`