# 📘 Syntax: Argument with No Return Value Function

---

## 📌 General Syntax

```c
void function_name(data_type var1, data_type var2)
{
    // statements
}
```

---

## 📌 Function Call

```c
function_name(value1, value2);
```

---

## 📌 Example

```c
void add(int a, int b)
{
    printf("Sum = %d", a + b);
}

int main()
{
    add(10, 20);
    return 0;
}
```

---

## ⚠ Important Rules

- Use `void` return type
- Must pass arguments while calling
- No `return` statement needed
- Output is handled inside function

---

## ❌ Common Mistakes

- Forgetting parameters
- Using return value incorrectly
- Not calling function properly
- Mixing return and void logic

---

## 📌 Format Specifiers Used

| Type | Specifier |
|------|----------|
| int | %d |
| float | %f |
| char | %c |

---

## 🏁 Key Point

👉 This function always performs action but never returns value.