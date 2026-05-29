/*
===========================================
Question 06:
Write a C program to swap two
variables using pointer references.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int num1 = 11, num2 = 22, temp;

    // Pointer declarations
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    // Swapping process
    temp = *ptr1;

    *ptr1 = *ptr2;

    *ptr2 = temp;

    // Display result
    printf("NUM1 = %d\n", num1);

    printf("NUM2 = %d", num2);
}

/*
OUTPUT:
NUM1 = 22
NUM2 = 11
*/