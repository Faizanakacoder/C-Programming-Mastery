/*
===========================================
Question 05:
Write a C program to modify
float value using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float variable
    float num = 10.5;

    // Pointer declaration
    float *ptr = &num;

    // Modify value
    *ptr = 88.8;

    // Display modified value
    printf("Modified Value = %.2f", num);
}

/*
OUTPUT:
Modified Value = 88.80
*/