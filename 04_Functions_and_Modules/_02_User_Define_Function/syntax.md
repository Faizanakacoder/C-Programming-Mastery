# 📘 Syntax of User Defined Functions

---

# 📌 Function Declaration

```c
return_type function_name();
```

---

# 📌 Function Definition

```c
return_type function_name()
{
    // code
}
```

---

# 📌 Function Call

```c
function_name();
```

---

# 📌 Example

```c
#include<stdio.h>

void hello();

void main()
{
    hello();
}

void hello()
{
    printf("Hello");
}
```

---

# 📌 Important Rules

✅ Declare function before main()  
✅ Use proper return type  
✅ Use proper arguments  
✅ Call function correctly  

---

# 📌 Common Mistakes

❌ Missing semicolon  
❌ Wrong return type  
❌ Missing function call  
❌ Wrong argument passing  