# Theory of Return Statement in C

---

# 📖 Definition

The **return statement** is used to exit a function and optionally return a value.

---

# 🏗 Syntax

```c
return value;
```

---

# 🔁 Example

```c
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(5, 10);
    printf("Result = %d\n", result);

    return 0;
}
```

---

## Output

```txt
Result = 15
```

---

# ⚙ Working Flow

```txt
Function Called
     ↓
Execution Starts
     ↓
return statement executes
     ↓
Value goes back to main()
     ↓
Function ends immediately
```

---

# 🔥 Types of Return

## 1. With Value
```c
return 10;
```

## 2. Without Value (void)
```c
return;
```

---

# 🧠 Important Points

- Only one value can be returned
- Ends function immediately
- Must match return type

---

# 🏁 Conclusion

Return statement connects function output with main program execution.