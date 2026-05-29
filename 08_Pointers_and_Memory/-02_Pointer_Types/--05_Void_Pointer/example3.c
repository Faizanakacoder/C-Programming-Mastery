/*
===========================================
Question 03:
Write a C program to store
float address in void pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float variable
    float num = 15.5;

    // Void pointer declaration
    void *ptr = &num;

    // Display float value
    printf("Float Value = %.2f", *(float *)ptr);
}

/*
OUTPUT:
Float Value = 15.50
*/