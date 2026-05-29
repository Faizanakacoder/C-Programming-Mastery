/*
===========================================
Question 01:
Write a C program to declare
a void pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 10;

    // Void pointer declaration
    void *ptr = &num;

    // Display value using typecasting
    printf("Value = %d", *(int *)ptr);
}

/*
OUTPUT:
Value = 10
*/