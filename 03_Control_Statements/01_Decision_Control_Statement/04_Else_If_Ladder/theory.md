# Theory - Else If Ladder in C

## Introduction

The `else if ladder` is used to check multiple conditions.

When one condition becomes true:

```txt
Remaining conditions are skipped
```

Only one block executes.

---

## Syntax

```c
if(condition1)
{
    // code
}
else if(condition2)
{
    // code
}
else
{
    // code
}
```

---

## Working of Else If Ladder

### Step 1

First condition is checked.

### Step 2

If true:

```txt
Block executes
```

If false:

```txt
Next condition checks
```

### Step 3

If no condition is true:

```txt
Else block executes
```

---

## Example

```c
int marks = 75;

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

Output:

```txt
Grade B
```

---

## Important Points

- Used for multiple conditions
- Only one block executes
- `else` is optional

---

## Real Life Example

Traffic signal:

```txt
Red    → Stop
Yellow → Wait
Green  → Go
```

---

## Conclusion

Else if ladder helps check multiple conditions efficiently.