/*
===========================================
Question 04:
Write a C program to declare a
double pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    double num = 55.75;

    double *dp = &num;

    printf("Double Value = %.2lf\n", num);

    printf("Address = %u", dp);
}

/*
OUTPUT:
Double Value = 55.75
Address = 6422288
*/