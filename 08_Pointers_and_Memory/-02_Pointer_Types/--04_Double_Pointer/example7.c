/*
===========================================
Question 07:
Write a C program using
double pointer with function.
===========================================
*/

#include<stdio.h>

void display(int **dptr)
{
    // Display value
    printf("Value = %d", **dptr);
}

void main()
{
    // Integer variable
    int num = 1000;

    // Pointer declaration
    int *ptr = &num;

    // Double pointer declaration
    int **dptr = &ptr;

    // Function call
    display(dptr);
}

/*
OUTPUT:
Value = 1000
*/