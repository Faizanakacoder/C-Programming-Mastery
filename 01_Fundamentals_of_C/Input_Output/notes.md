# Input and Output in C - Quick Notes

## Definition

Input and Output functions are used to interact with the user.

- Input → Taking data from user
- Output → Displaying data to user

---

## printf()

`printf()` is used to display output on screen.

Syntax:

```c
printf("Message");
```

Example:

```c
printf("Hello World");
```

---

## scanf()

`scanf()` is used to take input from the user.

Syntax:

```c
scanf("%d", &variable);
```

Example:

```c
int age;
scanf("%d", &age);
```

---

## Common Format Specifiers

| Data Type | Specifier |
|------------|------------|
| int | %d |
| float | %f |
| char | %c |
| string | %s |
| double | %lf |

---

## Important Points

- `printf()` → Output function
- `scanf()` → Input function
- `&` is used in `scanf()` to store value in memory location
- `%d`, `%f`, `%c`, `%s` are format specifiers

---

## Short Summary

`printf()` displays output and `scanf()` takes input from the user in C programming.