/*
===========================================
Question 01:
Write a C program to display address
of a variable using pointer concepts.
===========================================
*/

#include<stdio.h>

void main()
{
    int num = 10;

    printf("Value = %d\n", num);

    printf("Address = %u", &num);
}

/*
OUTPUT:
Value = 10
Address = 6422296
*/