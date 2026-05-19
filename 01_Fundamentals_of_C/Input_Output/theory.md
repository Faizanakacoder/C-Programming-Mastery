# Theory - Input and Output in C

## Introduction

Input and Output functions are used for communication between the user and the program.

A user gives input to the program, and the program processes it and displays output.

Example:

Input → Enter Marks = 85  
Processing → Program calculates result  
Output → Marks = 85

---

## Output Function - printf()

The `printf()` function is used to display output on the screen.

### Syntax

```c
printf("message");
```

### Example

```c
printf("Hello World");
```

### Features of printf()

- Displays text on screen
- Displays variable values
- Supports format specifiers

---

## Input Function - scanf()

The `scanf()` function is used to take input from the user.

### Syntax

```c
scanf("%d", &variable_name);
```

### Example

```c
int age;
scanf("%d", &age);
```

### Why `&` is Used?

`&` (Address Operator) gives the memory location of a variable.

It helps `scanf()` store user input in the correct variable.

---

## Format Specifiers

Format specifiers are used to define the type of data.

| Data Type | Format Specifier |
|------------|------------------|
| int | %d |
| float | %f |
| char | %c |
| string | %s |
| double | %lf |

---

## Difference Between printf() and scanf()

| printf() | scanf() |
|-----------|----------|
| Displays output | Takes input |
| Output function | Input function |
| No `&` needed | `&` mostly required |

---

## Real Life Example

Think of an ATM Machine:

- You enter PIN → Input
- ATM shows balance → Output

Same concept works in C programming.

---

## Conclusion

Input and Output functions make programs interactive.

Without input and output, programs cannot communicate with users.