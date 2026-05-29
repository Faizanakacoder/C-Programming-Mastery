/*
===========================================
Question 03:
Write a C program to declare a
float pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    float num = 12.5;

    float *fp = &num;

    printf("Float Value = %.2f\n", num);

    printf("Address = %u", fp);
}

/*
OUTPUT:
Float Value = 12.50
Address = 6422290
*/