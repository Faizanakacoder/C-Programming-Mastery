/*
===========================================
Question 03:
Write a C program to display value
stored inside pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int x = 100;

    int *p = &x;

    printf("Pointer Value = %u", p);
}

/*
OUTPUT:
Pointer Value = 6422292
*/