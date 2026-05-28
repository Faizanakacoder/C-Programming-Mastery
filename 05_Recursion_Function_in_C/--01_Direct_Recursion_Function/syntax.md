# 📘 Direct Recursion Syntax in C

---

## 🧾 Basic Syntax

```c
return_type function_name(parameters)
{
    if(base_condition)
        return value;

    return function_name(updated_parameters);
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

int main()
{
    printf("Factorial = %d", fact(5));

    return 0;
}
```

---

## ⚠️ Rules

✔ Must call itself  
✔ Must have base condition  
✔ Input must decrease each call  
✔ Return type must match result  

---

## ❌ Common Mistakes

❌ Missing base condition  
❌ Infinite recursion  
❌ Not reducing input  
❌ Stack overflow  