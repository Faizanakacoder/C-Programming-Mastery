# 📄 10_simple_calculator.c

```c id="s9ncb9"
/*
===========================================
Question:
Write a C program to create
a simple calculator using
input and output functions.
===========================================
*/

#include<stdio.h>

void main()
{
    int a,b,sum;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    sum = a + b;

    printf("Sum = %d", sum);
}
```
