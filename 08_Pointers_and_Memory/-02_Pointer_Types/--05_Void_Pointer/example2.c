/*
===========================================
Question 02:
Write a C program to store
integer address in void pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 100;

    // Void pointer declaration
    void *ptr = &num;

    // Display integer value
    printf("Integer Value = %d", *(int *)ptr);
}

/*
OUTPUT:
Integer Value = 100
*/