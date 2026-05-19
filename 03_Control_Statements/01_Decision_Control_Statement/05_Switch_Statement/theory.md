# Theory - Switch Statement in C

## Introduction

The `switch` statement is used to execute one block of code from multiple choices.

It is an alternative to:

```txt
else if ladder
```

---

## Syntax

```c
switch(expression)
{
    case value1:
        statement;
        break;

    case value2:
        statement;
        break;

    default:
        statement;
}
```

---

## Working of Switch Statement

### Step 1

Expression is checked.

### Step 2

Matching `case` executes.

### Step 3

`break` stops execution.

### Step 4

If no case matches:

```txt
default block executes
```

---

## Example

```c
int day = 2;

switch(day)
{
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    default:
        printf("Invalid Day");
}
```

Output:

```txt
Tuesday
```

---

## Important Points

- `switch` works with cases
- `break` stops execution
- `default` executes if no case matches
- Case values must be constant

---

## Real Life Example

ATM Menu:

```txt
1 → Check Balance
2 → Withdraw Money
3 → Deposit Money
```

---

## Conclusion

Switch statement simplifies multiple choice decision making.