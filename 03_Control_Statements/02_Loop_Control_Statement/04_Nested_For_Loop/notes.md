# Nested For Loop in C - Quick Revision Notes

---

## Definition

Nested for loop means:

```txt
For loop inside another for loop
```

---

## Syntax

```c
for(i = 1; i <= rows; i++)
{
    for(j = 1; j <= columns; j++)
    {
        statement;
    }
}
```

---

## Working

```txt
Outer Loop → Rows
Inner Loop → Columns
```

---

## Example

```c
for(i = 1; i <= 3; i++)
{
    for(j = 1; j <= 5; j++)
    {
        printf("*");
    }

    printf("\n");
}
```

---

## Important Points

✅ Used for patterns  
✅ Used for matrices  
✅ Inner loop finishes first  
✅ Outer loop controls rows

---

## Short Summary

Nested for loop repeats another loop inside a loop.