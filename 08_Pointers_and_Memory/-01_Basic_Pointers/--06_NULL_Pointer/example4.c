/*
===========================================
Question 04:
Write a C program to compare
pointer with NULL.
===========================================
*/

#include<stdio.h>

void main()
{
    // Pointer declaration
    int *p = NULL;

    // Compare pointer with NULL
    if(p == NULL)
    {
        printf("Comparison Successful");
    }
}

/*
OUTPUT:
Comparison Successful
*/