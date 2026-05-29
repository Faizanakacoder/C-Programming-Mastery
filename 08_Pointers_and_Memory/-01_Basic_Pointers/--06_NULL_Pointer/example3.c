/*
===========================================
Question 03:
Write a C program to check whether
pointer is NULL or not.
===========================================
*/

#include<stdio.h>

void main()
{
    // NULL pointer declaration
    int *p = NULL;

    // Check pointer
    if(p == NULL)
    {
        printf("Pointer is NULL");
    }
    else
    {
        printf("Pointer is NOT NULL");
    }
}

/*
OUTPUT:
Pointer is NULL
*/