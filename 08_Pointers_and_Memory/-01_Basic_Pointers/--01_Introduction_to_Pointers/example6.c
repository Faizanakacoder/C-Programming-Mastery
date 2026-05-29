/*
===========================================
Question 06:
Write a C program using multiple
pointer variables.
===========================================
*/

#include<stdio.h>

void main()
{
    int a = 10, b = 20;

    int *p1 = &a;
    int *p2 = &b;

    printf("Value of A = %d\n", *p1);

    printf("Value of B = %d", *p2);
}

/*
OUTPUT:
Value of A = 10
Value of B = 20
*/