/*
===========================================
Question 05:
Write a C program demonstrating
typecasting of void pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 500;

    // Void pointer declaration
    void *ptr = &num;

    // Typecasting and display
    printf("Value = %d", *(int *)ptr);
}

/*
OUTPUT:
Value = 500
*/