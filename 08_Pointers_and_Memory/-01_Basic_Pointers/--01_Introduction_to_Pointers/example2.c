/*
===========================================
Question 02:
Write a C program to store variable
address inside a pointer.
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