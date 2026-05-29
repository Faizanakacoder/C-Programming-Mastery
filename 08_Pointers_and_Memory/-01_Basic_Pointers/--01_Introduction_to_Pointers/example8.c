/*
===========================================
Question 08:
Write a C program using float pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    float num = 10.5;

    float *fp = &num;

    printf("Float Value = %.2f\n", num);

    printf("Using Pointer = %.2f", *fp);
}

/*
OUTPUT:
Float Value = 10.50
Using Pointer = 10.50
*/