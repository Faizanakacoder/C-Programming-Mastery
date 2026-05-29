/*
===========================================
Question 06:
Write a C program demonstrating
float pointer dereference.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float variable
    float num = 15.5;

    // Float pointer
    float *fp = &num;

    // Display float value using dereference
    printf("Float Value = %.2f", *fp);
}

/*
OUTPUT:
Float Value = 15.50
*/