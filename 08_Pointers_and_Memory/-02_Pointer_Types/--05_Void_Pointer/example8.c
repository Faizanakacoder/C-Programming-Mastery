/*
===========================================
Question 08:
Write a C program demonstrating
generic pointer behavior.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int a = 10;

    // Float variable
    float b = 20.5;

    // Void pointer declaration
    void *ptr;

    // Store integer address
    ptr = &a;

    printf("Integer = %d\n", *(int *)ptr);

    // Store float address
    ptr = &b;

    printf("Float = %.2f", *(float *)ptr);
}

/*
OUTPUT:
Integer = 10
Float = 20.50
*/