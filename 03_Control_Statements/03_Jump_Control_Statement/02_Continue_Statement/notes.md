# Continue Statement - Quick Notes

---

## Definition

Skips current loop iteration.

---

## Syntax

```c
continue;
```

---

## Example

```c
for(i = 1; i <= 5; i++)
{
    if(i == 3)
        continue;

    printf("%d\n", i);
}
```

---

## Output

```txt
1
2
4
5
```

---

## Key Points

✅ Skips iteration  
✅ Does NOT stop loop  
✅ Used in loops only  
✅ Improves control flow  

---

## Difference

### break
```txt
Stops loop completely
```

### continue
```txt
Skips current iteration
```