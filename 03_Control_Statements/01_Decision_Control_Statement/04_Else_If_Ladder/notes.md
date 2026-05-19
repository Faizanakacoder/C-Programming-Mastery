# Else If Ladder in C - Quick Notes

## Definition

Else if ladder is used to check multiple conditions.

---

## Syntax

```c
if(condition1)
{
    statement;
}
else if(condition2)
{
    statement;
}
else
{
    statement;
}
```

---

## Example

```c
if(marks >= 90)
{
    printf("Grade A");
}
else if(marks >= 75)
{
    printf("Grade B");
}
else
{
    printf("Grade C");
}
```

---

## Important Point

```txt
Only one block executes
```

After one true condition:

```txt
Remaining conditions skip
```

---

## Short Summary

Else if ladder is used for multiple condition checking.