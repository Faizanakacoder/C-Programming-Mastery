# 📄 09_minimum_number.c

```c id="m1v6jl"
/*
===========================================
Question:
Write a C program to find
minimum of two numbers.
===========================================
*/

#include<stdio.h>

void main()
{
    int a,b;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    if(a<b)
        printf("Minimum = %d", a);
    else
        printf("Minimum = %d", b);
}

/*
--------------- OUTPUT ----------------

Enter Two Numbers: 10 25
Minimum = 10

---------------------------------------
*/
```
