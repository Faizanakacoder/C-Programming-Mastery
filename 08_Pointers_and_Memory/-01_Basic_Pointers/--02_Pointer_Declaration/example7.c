/*
===========================================
Question 07:
Write a C program to display pointer
address.
===========================================
*/

#include<stdio.h>

void main()
{
    int x = 50;

    int *p = &x;

    printf("Address Stored in Pointer = %u", p);
}

/*
OUTPUT:
Address Stored in Pointer = 6422292
*/