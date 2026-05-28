# 📘 04. Syntax - Argument with Return Value Function

---

## 🧾 Function Definition Syntax

```c
return_type function_name(datatype a, datatype b)
{
    // logic
    return value;
}
```

---

## 📌 Function Call Syntax

```c
variable = function_name(value1, value2);
```

---

## 💡 Example Program

```c
#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

void main()
{
    int result;

    result = add(10, 20);

    printf("Sum = %d", result);
}
```

---

## ⚠️ Rules

✔ Must pass arguments  
✔ Must return value  
✔ Must store returned value  
✔ Return type must match result  

---

## ❌ Common Mistakes

❌ Forgetting return statement  
❌ Not storing return value  
❌ Wrong data types  
❌ Missing parameters  