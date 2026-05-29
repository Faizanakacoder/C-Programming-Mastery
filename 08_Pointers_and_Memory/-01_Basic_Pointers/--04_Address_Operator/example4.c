/*
===========================================
Question 04:
Write a C program to store variable
address inside pointer using
address operator.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int x = 50;

    // Pointer initialization using &
    int *p = &x;

    // Display address stored in pointer
    printf("Pointer Address = %u", p);
}

/*
OUTPUT:
Pointer Address = 6422292
*/