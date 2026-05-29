/*
===========================================
Question 09:
Write a C program to swap
two numbers using integer pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int a = 10, b = 20, temp;

    // Pointer declaration
    int *p1 = &a;
    int *p2 = &b;

    // Swapping logic
    temp = *p1;

    *p1 = *p2;

    *p2 = temp;

    // Display swapped values
    printf("A = %d\n", a);

    printf("B = %d", b);
}

/*
OUTPUT:
A = 20
B = 10
*/