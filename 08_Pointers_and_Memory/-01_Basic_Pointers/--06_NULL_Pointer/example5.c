/*
===========================================
Question 05:
Write a C program using NULL pointer
inside if condition.
===========================================
*/

#include<stdio.h>

void main()
{
    // NULL pointer declaration
    int *ptr = NULL;

    // Condition checking
    if(ptr == NULL)
    {
        printf("Pointer does not contain valid address");
    }
}

/*
OUTPUT:
Pointer does not contain valid address
*/