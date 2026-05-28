# 📘 Theory of No Argument No Return Functions

---

# 📌 What is No Argument No Return Function?

A No Argument No Return function is a function:

- that does not take any input
- that does not return any value

The function directly performs operations internally.

---

# 📌 Definition

A function with no parameters and no return value is called No Argument No Return function.

---

# 📌 Basic Syntax

```c
void display()
{
    // code
}
```

---

# 📌 Explanation

| Part | Meaning |
|------|---------|
| void | No return value |
| display() | No arguments |
| {} | Function body |

---

# 🔍 Dry Run Example

```c
#include<stdio.h>

void hello();

void main()
{
    hello();
}

void hello()
{
    printf("Hello World");
}
```

---

# 📌 Step-by-Step Execution

| Step | Execution |
|------|-----------|
| 1 | Program starts |
| 2 | main() executes |
| 3 | hello() function called |
| 4 | Control transfers to function |
| 5 | Output displayed |
| 6 | Control returns to main() |
| 7 | Program ends |

---

# 📌 Advantages

✅ Simple to create  
✅ Easy to understand  
✅ Good for beginners  
✅ Reduces code repetition  

---

# 📌 Disadvantages

❌ Cannot pass data directly  
❌ Limited flexibility  

---

# 📌 Important Points

✅ Uses void return type  
✅ Takes no parameters  
✅ Called using function name  

---

# 📌 Viva Questions

## What is No Argument No Return function?

A function with no arguments and no return value.

---

## Why is void used?

Because function returns nothing.

---

# 🎯 Conclusion

No Argument No Return functions are best for beginners to understand basic function concepts.