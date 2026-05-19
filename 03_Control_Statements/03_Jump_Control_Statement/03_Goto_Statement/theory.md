# Theory of Goto Statement in C

---

# 📖 Definition

The **goto statement** is a jump statement used to transfer control unconditionally.

---

# 🏗 Syntax

```c
goto label;

label:
statement;
```

---

# ⚙ Working

When program encounters:

```c
goto label;
```

It:

```txt
Immediately jumps to the label section
```

---

# 🔁 Example

```c
#include <stdio.h>

int main()
{
    printf("Start\n");

    goto end;

    printf("This will not print\n");

    end:
    printf("End of program\n");

    return 0;
}
```

---

## Output

```txt
Start
End of program
```

---

# 🔥 Uses of Goto

## 1. Exit nested loops

```txt
Break multiple loops at once
```

---

## 2. Error handling

```txt
Jump to error section
```

---

## 3. Cleanup operations

```txt
Free resources before exit
```

---

# ⚠ Disadvantages

- Reduces readability
- Creates spaghetti code
- Hard to debug

---

# 🏁 Conclusion

Goto is powerful but should be avoided in structured programming unless necessary.