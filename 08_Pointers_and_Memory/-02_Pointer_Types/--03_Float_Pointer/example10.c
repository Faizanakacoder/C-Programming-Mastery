/*
===========================================
Question 10:
Write a C program using
float pointer with function.
===========================================
*/

#include<stdio.h>

void display(float *ptr)
{
    // Display float value
    printf("Value = %.2f", *ptr);
}

void main()
{
    // Float variable
    float num = 500.5;

    // Function call
    display(&num);
}

/*
OUTPUT:
Value = 500.50
*/