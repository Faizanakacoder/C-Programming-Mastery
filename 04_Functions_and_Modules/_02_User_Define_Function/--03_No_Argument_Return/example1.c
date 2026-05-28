# 📁 programs/

---

## 1️⃣ Program 1: Return Fixed Value

```c
/*
===========================================
Question:
Write a C program to return a fixed value
using no argument return function.
===========================================
*/

#include<stdio.h>

int getValue()
{
    return 10;
}

int main()
{
    int num = getValue();

    printf("Returned Value = %d", num);

    return 0;
}
```

---

## 2️⃣ Program 2: Square of Number

```c
/*
===========================================
Question:
Find square of a number using function.
===========================================
*/

#include<stdio.h>

int square()
{
    int n = 6;
    return n * n;
}

int main()
{
    printf("Square = %d", square());

    return 0;
}
```

---

## 3️⃣ Program 3: Sum of Two Numbers

```c
/*
===========================================
Question:
Return sum of two numbers using function.
===========================================
*/

#include<stdio.h>

int sum()
{
    int a = 10, b = 20;
    return a + b;
}

int main()
{
    printf("Sum = %d", sum());

    return 0;
}
```

---

## 4️⃣ Program 4: Maximum Number

```c
/*
===========================================
Question:
Find maximum of two numbers using function.
===========================================
*/

#include<stdio.h>

int max()
{
    int a = 30, b = 25;

    return (a > b) ? a : b;
}

int main()
{
    printf("Maximum = %d", max());

    return 0;
}
```

---

## 5️⃣ Program 5: Factorial

```c
/*
===========================================
Question:
Find factorial using function.
===========================================
*/

#include<stdio.h>

int fact()
{
    int n = 5, i, f = 1;

    for(i = 1; i <= n; i++)
        f *= i;

    return f;
}

int main()
{
    printf("Factorial = %d", fact());

    return 0;
}
```

---

## 6️⃣ Program 6: Even or Odd

```c
/*
===========================================
Question:
Check even or odd using function.
===========================================
*/

#include<stdio.h>

int check()
{
    int n = 9;

    if(n % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    if(check())
        printf("Even");
    else
        printf("Odd");

    return 0;
}
```

---

## 7️⃣ Program 7: ASCII Value

```c
/*
===========================================
Question:
Return ASCII value of a character.
===========================================
*/

#include<stdio.h>

int ascii()
{
    char c = 'B';
    return c;
}

int main()
{
    printf("ASCII = %d", ascii());

    return 0;
}
```

---

## 8️⃣ Program 8: Area of Circle

```c
/*
===========================================
Question:
Find area of circle using function.
===========================================
*/

#include<stdio.h>

float area()
{
    float r = 7;
    return 3.14 * r * r;
}

int main()
{
    printf("Area = %f", area());

    return 0;
}
```

---

## 9️⃣ Program 9: Reverse Number

```c
/*
===========================================
Question:
Reverse a number using function.
===========================================
*/

#include<stdio.h>

int reverse()
{
    int n = 456, rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

int main()
{
    printf("Reverse = %d", reverse());

    return 0;
}
```

---

## 🔟 Program 10: Largest Digit

```c
/*
===========================================
Question:
Find largest digit in a number.
===========================================
*/

#include<stdio.h>

int largest()
{
    int n = 7392, max = 0;

    while(n != 0)
    {
        int digit = n % 10;

        if(digit > max)
            max = digit;

        n /= 10;
    }

    return max;
}

int main()
{
    printf("Largest Digit = %d", largest());

    return 0;
}
```