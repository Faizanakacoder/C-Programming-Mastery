# 📘 Syntax - No Argument but Return Value Function

---

## 🧾 Function Definition Syntax

```c
return_type function_name()
{
    // statements
    return value;
}
```

---

## 📌 Function Call Syntax

```c
variable = function_name();
```

---

## 💡 Example Program

```c
#include<stdio.h>

int getNumber()
{
    return 100;
}

int main()
{
    int num;

    num = getNumber();

    printf("Value = %d", num);

    return 0;
}
```

---

## ⚠️ Rules

✔ No parameters inside function brackets  
✔ Must return a value  
✔ Return type must match returned value  
✔ Function call must store result  

---

## ❌ Common Mistakes

❌ Forgetting return statement  
❌ Using arguments by mistake  
❌ Not storing return value  
❌ Wrong return type usage  

---

## 🎯 Format Specifiers

| Data Type | Specifier |
|----------|----------|
| int | %d |
| float | %f |
| char | %c |

---

## 🧠 Key Pattern

```c
type function()
{
    return value;
}
```