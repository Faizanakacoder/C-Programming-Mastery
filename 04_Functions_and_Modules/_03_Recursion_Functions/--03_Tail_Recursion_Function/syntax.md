# 📘 Tail Recursion Syntax

---

## 🧾 Basic Syntax

```c
void function(int n)
{
    if(n == 0)
        return;

    function(n - 1);   // last statement
}
```

---

## 💡 Example Syntax

```c
void print(int n)
{
    if(n == 0)
        return;

    printf("%d ", n);
    print(n - 1);
}
```

---

## ⚠️ Rules

✔ Recursive call must be last statement  
✔ No operations after recursive call  
✔ Must include base condition  
✔ Should reduce problem size each call  

---

## ❌ Common Mistakes

❌ Doing operations after recursion  
❌ Missing base condition  
❌ Infinite recursion  