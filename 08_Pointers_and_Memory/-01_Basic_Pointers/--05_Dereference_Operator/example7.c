/*
===========================================
Question 07:
Write a C program using multiple
pointer dereferences.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declarations
    int a = 10, b = 20;

    // Pointer initialization
    int *p1 = &a;
    int *p2 = &b;

    // Display values using dereferencing
    printf("A = %d\n", *p1);

    printf("B = %d", *p2);
}

/*
OUTPUT:
A = 10
B = 20
*/