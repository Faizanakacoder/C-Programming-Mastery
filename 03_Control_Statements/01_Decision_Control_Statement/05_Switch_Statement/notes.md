# Switch Statement in C - Quick Notes

## Definition

Switch statement is used for multiple choices.

---

## Syntax

```c
switch(expression)
{
    case value:
        statement;
        break;

    default:
        statement;
}
```

---

## Important Keywords

```txt
switch
case
break
default
```

---

## Example

```c
switch(day)
{
    case 1:
        printf("Monday");
        break;

    default:
        printf("Invalid");
}
```

---

## Important Point

- `break` stops execution
- `default` runs when no case matches

---

## Short Summary

Switch statement is used for multiple option selection.