# 📘 Recursion Syntax in C

---

## 🧾 Basic Syntax

```c
return_type function_name(parameters)
{
    if(base_condition)
        return value;

    return function_name(smaller_parameters);
}
```

---

## 💡 Example Syntax

```c
#include<stdio.h>

int fact(int n)
{
    if(n == 1)
        return 1;

    return n * fact(n - 1);
}

void main()
{
    printf("%d", fact(5));
}
```

---

## ⚠️ Rules of Recursion

✔ Must have base condition  
✔ Function must call itself  
✔ Input must move toward base condition  
✔ Return type must match result  

---

## ❌ Common Mistakes

❌ Missing base condition  
❌ Infinite recursion  
❌ Not reducing input value  
❌ Stack overflow  

---

## 📌 Key Pattern

```
Solve big problem → break into smaller problem → repeat → stop at base case
```