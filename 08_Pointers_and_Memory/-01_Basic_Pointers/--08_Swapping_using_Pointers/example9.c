/*
===========================================
Question 09:
Write a C program to swap multiple
values step by step using pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declarations
    int a = 5, b = 10, temp;

    // Pointer declarations
    int *p1 = &a;
    int *p2 = &b;

    // Display before swapping
    printf("Before Swapping:\n");

    printf("A = %d\n", *p1);

    printf("B = %d\n", *p2);

    // Swapping
    temp = *p1;

    *p1 = *p2;

    *p2 = temp;

    // Display after swapping
    printf("\nAfter Swapping:\n");

    printf("A = %d\n", *p1);

    printf("B = %d", *p2);
}

/*
OUTPUT:
Before Swapping:
A = 5
B = 10

After Swapping:
A = 10
B = 5
*/