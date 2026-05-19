# Do While Loop in C - Quick Revision Notes

---

## Definition

Do while loop executes code repeatedly.

It executes:

```txt
At least one time
```

because condition checks at the end.

---

## Syntax

```c
do
{
    statements;
}
while(condition);
```

---

## Type of Loop

```txt
Exit Controlled Loop
```

---

## Working

```txt
Execute code
      ↓
Check condition
      ↓
True → Repeat
False → Stop
```

---

## Example

```c
int i = 1;

do
{
    printf("%d\n", i);
    i++;
}
while(i <= 5);
```

---

## Important Points

✅ Executes at least once  
✅ Condition checks later  
✅ Used in menu programs  
✅ Useful for repeated input

---

## Difference from While Loop

| While | Do While |
|--------|-----------|
| Condition first | Execution first |
| May not execute | Executes once |

---

## Common Mistakes

❌ Forgetting semicolon

Wrong:

```c
while(i <= 5)
```

Correct:

```c
while(i <= 5);
```

---

## Short Summary

The **do while loop** repeats code execution and always runs at least once.