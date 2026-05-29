/*
===========================================
Question 06:
Write a C program showing relationship
between variable and pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int x = 100;

    int *p = &x;

    printf("Variable Value = %d\n", x);

    printf("Pointer Value = %d", *p);
}

/*
OUTPUT:
Variable Value = 100
Pointer Value = 100
*/