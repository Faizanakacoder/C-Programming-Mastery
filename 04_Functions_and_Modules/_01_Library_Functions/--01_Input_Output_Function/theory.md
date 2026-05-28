# 📘 Theory of Library Functions in C

---

# 📌 What Are Library Functions?

Library functions are predefined functions already written and stored inside C libraries.

These functions are available for programmers to use directly in programs.

Library functions help programmers avoid writing repeated logic manually.

---

# 📌 Definition

A library function is a built-in predefined function provided by the C language to perform a specific task.

---

# 🧠 Real Life Analogy

Suppose you want to calculate square root.

Instead of writing full square root calculation logic manually:

```c
sqrt(25);
```

The function already performs calculation internally.

This saves time and effort.

---

# 📌 Need of Library Functions

Without library functions:

❌ Programs become lengthy  
❌ Logic becomes repetitive  
❌ Development becomes slower  
❌ Coding becomes difficult  

With library functions:

✅ Faster coding  
✅ Cleaner programs  
✅ Better readability  
✅ Improved efficiency  
✅ Easier development  

---

# 📚 Types of Library Functions

## 1️⃣ Input Output Functions

Header File:

```c
#include<stdio.h>
```

Examples:
- printf()
- scanf()
- getchar()
- putchar()

---

## 2️⃣ Mathematical Functions

Header File:

```c
#include<math.h>
```

Examples:
- sqrt()
- pow()
- ceil()
- floor()

---

## 3️⃣ String Functions

Header File:

```c
#include<string.h>
```

Examples:
- strlen()
- strcpy()
- strcat()
- strcmp()

---

## 4️⃣ Utility Functions

Header File:

```c
#include<stdlib.h>
```

Examples:
- rand()
- abs()
- malloc()

---

# 📌 Important Concept — Header Files

Before using library functions we must include proper header files.

Example:

```c
#include<stdio.h>
```

This tells compiler to use standard input output library.

---

# 📌 Advantages of Library Functions

| Advantage | Explanation |
|-----------|-------------|
| Faster Coding | Saves development time |
| Less Errors | Already tested by experts |
| Reusable | Can use many times |
| Easy Programs | Reduces complexity |
| Standardized | Same everywhere |

---

# 📌 Disadvantages of Library Functions

| Disadvantage | Explanation |
|-------------|-------------|
| Less Control | Internal working hidden |
| Dependency | Requires libraries |

---

# 📌 Difference Between Library Function and User Defined Function

| Library Function | User Defined Function |
|-----------------|----------------------|
| Already predefined | Created by programmer |
| Built into C | Written manually |
| Easy to use | Need custom logic |
| Example: printf() | Example: add() |

---

# 🔍 Dry Run Example 1 — sqrt()

```c
#include<stdio.h>
#include<math.h>

int main()
{
    int n = 25;

    printf("%f", sqrt(n));

    return 0;
}
```

---

# 📌 Step-by-Step Execution

| Step | Execution |
|------|-----------|
| 1 | Program starts |
| 2 | math.h library loads |
| 3 | Variable n stores 25 |
| 4 | sqrt(25) calculates |
| 5 | Result becomes 5.000000 |
| 6 | printf displays result |
| 7 | Program ends |

---

# 🔍 Dry Run Example 2 — strlen()

```c
#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Hello";

    printf("%d", strlen(str));

    return 0;
}
```

---

# 📌 Step-by-Step Execution

| Step | Execution |
|------|-----------|
| 1 | Program starts |
| 2 | String stored in memory |
| 3 | strlen() counts characters |
| 4 | Length becomes 5 |
| 5 | printf displays output |
| 6 | Program ends |

---

# 📌 Important Interview Questions

## Q1. What is a library function?

A predefined function provided by C libraries.

---

## Q2. Why are header files required?

Header files contain declarations of predefined functions.

---

## Q3. Difference between printf() and scanf()?

| printf() | scanf() |
|----------|----------|
| Output Function | Input Function |
| Displays data | Takes input |

---

# 📌 Key Points

✅ Library functions are predefined  
✅ Header files are required  
✅ Functions simplify programming  
✅ Functions improve efficiency  
✅ Functions reduce coding effort  

---

# 🎯 Conclusion

Library functions are one of the most important concepts in C programming.

They help programmers:
- write shorter programs
- save development time
- reduce coding effort
- improve efficiency

Understanding library functions is the first step toward mastering C programming.