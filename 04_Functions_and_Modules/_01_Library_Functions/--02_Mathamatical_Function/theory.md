# 📄 theory.md

````md
# 📘 Theory of Mathematical Functions

---

# 📌 What are Mathematical Functions?

Mathematical functions are predefined functions used for mathematical calculations.

These functions are provided by the math.h library.

---

# 📌 Header File

```c
#include<math.h>
```

---

# 📌 sqrt() Function

Used to calculate square root.

Example:

```c
sqrt(25);
```

Output:

```c
5.000000
```

---

# 📌 pow() Function

Used to calculate power.

Example:

```c
pow(2,3);
```

Output:

```c
8.000000
```

---

# 📌 abs() Function

Used to find absolute value.

Example:

```c
abs(-10);
```

Output:

```c
10
```

---

# 📌 ceil() Function

Rounds number upward.

Example:

```c
ceil(4.2);
```

Output:

```c
5.000000
```

---

# 📌 floor() Function

Rounds number downward.

Example:

```c
floor(4.9);
```

Output:

```c
4.000000
```

---

# 📌 rand() Function

Generates random number.

Example:

```c
rand();
```

---

# 🔍 Dry Run Example

```c
#include<stdio.h>
#include<math.h>

void main()
{
    int n = 25;

    printf("%.2f", sqrt(n));
}
```

---

# 📌 Step-by-Step Execution

| Step | Execution |
|------|-----------|
| 1 | Program starts |
| 2 | math.h library included |
| 3 | Variable n stores 25 |
| 4 | sqrt(25) calculated |
| 5 | Result becomes 5.00 |
| 6 | Output displayed |
| 7 | Program ends |

---

# 📌 Advantages

✅ Fast calculations  
✅ Easy coding  
✅ Accurate results  
✅ Reduces complexity  

---

# 📌 Important Points

✅ sqrt() → square root  
✅ pow() → power  
✅ abs() → absolute value  
✅ ceil() → round upward  
✅ floor() → round downward  

---

# 🎯 Conclusion

Mathematical functions simplify complex calculations and improve programming efficiency.
````
