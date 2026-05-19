# Nested If Statement in C - Quick Notes

## Definition

Nested if means:

```txt
if inside another if
```

---

## Syntax

```c
if(condition1)
{
    if(condition2)
    {
        statement;
    }
}
```

---

## Example

```c
if(age >= 18)
{
    if(citizen == 1)
    {
        printf("Eligible");
    }
}
```

---

## Important Point

- First condition checks first
- Second condition checks after first becomes true

---

## Short Summary

Nested if is used for multiple condition checking.