/*
===========================================
Question 01:
Write a C program to declare an
integer pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int x = 10;

    int *p = &x;

    printf("Value = %d\n", x);

    printf("Address = %u", p);
}

/*
OUTPUT:
Value = 10
Address = 6422292
*/