/*
===========================================
Question 05:
Write a C program using multiple
pointer declarations.
===========================================
*/

#include<stdio.h>

void main()
{
    int a = 10, b = 20;

    int *p1 = &a;
    int *p2 = &b;

    printf("A = %d\n", *p1);

    printf("B = %d", *p2);
}

/*
OUTPUT:
A = 10
B = 20
*/