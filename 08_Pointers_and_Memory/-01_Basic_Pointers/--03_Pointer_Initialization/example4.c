/*
===========================================
Question 04:
Write a C program to initialize
a double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Double variable
    double num = 55.75;

    // Double pointer initialization
    double *dp = &num;

    // Display double value
    printf("Double Value = %.2lf\n", num);

    // Display using pointer
    printf("Using Pointer = %.2lf", *dp);
}

/*
OUTPUT:
Double Value = 55.75
Using Pointer = 55.75
*/