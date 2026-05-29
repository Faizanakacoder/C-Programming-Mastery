/*
===========================================
Question 01:
Write a C program to swap two
numbers using pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int a = 10, b = 20, temp;

    // Pointer declarations
    int *p1 = &a;
    int *p2 = &b;

    // Display before swapping
    printf("Before Swapping:\n");

    printf("A = %d\n", a);

    printf("B = %d\n", b);

    // Swapping logic
    temp = *p1;

    *p1 = *p2;

    *p2 = temp;

    // Display after swapping
    printf("\nAfter Swapping:\n");

    printf("A = %d\n", a);

    printf("B = %d", b);
}

/*
OUTPUT:
Before Swapping:
A = 10
B = 20

After Swapping:
A = 20
B = 10
*/