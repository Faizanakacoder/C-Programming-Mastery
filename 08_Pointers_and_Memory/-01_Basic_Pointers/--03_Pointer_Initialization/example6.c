/*
===========================================
Question 06:
Write a C program using multiple
pointer initializations.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int a = 10, b = 20;

    // Multiple pointer initialization
    int *p1 = &a;
    int *p2 = &b;

    // Display values using pointers
    printf("A = %d\n", *p1);

    printf("B = %d", *p2);
}

/*
OUTPUT:
A = 10
B = 20
*/