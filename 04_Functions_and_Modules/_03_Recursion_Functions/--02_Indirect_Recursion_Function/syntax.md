# 📘 Indirect Recursion Syntax

---

## 🧾 Basic Syntax

```c
void A();
void B();

void A()
{
    B();
}

void B()
{
    A();
}
```

---

## 💡 Controlled Indirect Recursion

```c
void A(int n)
{
    if(n > 0)
    {
        printf("A: %d\n", n);
        B(n - 1);
    }
}

void B(int n)
{
    if(n > 0)
    {
        printf("B: %d\n", n);
        A(n - 1);
    }
}
```

---

## ⚠️ Rules

✔ Must use multiple functions  
✔ Must include base condition  
✔ Must control recursion flow  
✔ Must avoid infinite loop  

---

## ❌ Common Mistakes

❌ No stopping condition  
❌ Infinite function calling  
❌ Wrong parameter passing  
❌ Stack overflow risk  