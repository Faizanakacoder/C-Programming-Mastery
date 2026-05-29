/*
===========================================
Question 07:
Write a C program showing safe
NULL pointer usage.
===========================================
*/

#include<stdio.h>

void main()
{
    // NULL pointer
    int *p = NULL;

    // Safe NULL checking
    if(p != NULL)
    {
        printf("%d", *p);
    }
    else
    {
        printf("Safe: Pointer is NULL");
    }
}

/*
OUTPUT:
Safe: Pointer is NULL
*/