# 📘 Head Recursion Syntax

---

## 🧾 Basic Syntax

```c
void function(int n)
{
    if(n == 0)
        return;

    function(n - 1);   // recursive call first

    printf("%d", n);   // processing after return
}
```

---

## 💡 Example

```c
void print(int n)
{
    if(n == 0)
        return;

    print(n - 1);

    printf("%d ", n);
}
```

---

## ⚠️ Rules

✔ Recursive call must be first  
✔ Processing happens after call  
✔ Must include base condition  
✔ Stack unwinding is important  

---

## ❌ Common Mistakes

❌ Printing before recursive call  
❌ Missing base condition  
❌ Infinite recursion  