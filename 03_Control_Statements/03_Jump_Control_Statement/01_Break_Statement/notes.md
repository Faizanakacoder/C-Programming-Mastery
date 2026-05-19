# Break Statement in C - Quick Revision Notes

---

## Definition

Break statement immediately stops loop execution.

---

## Syntax

```c
break;
```

---

## Used In

```txt
Loops
Switch statements
```

---

## Example

```c
for(i = 1; i <= 10; i++)
{
    if(i == 5)
    {
        break;
    }

    printf("%d\n", i);
}
```

---

## Output

```txt
1
2
3
4
```

---

## Important Points

✅ Immediately exits loop  
✅ Used in switch  
✅ Improves efficiency  
✅ Stops unnecessary execution

---

## Difference

### break

```txt
Stops loop
```

### continue

```txt
Skips iteration
```

---

## Short Summary

Break statement immediately exits the current loop.