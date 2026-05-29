/*
===========================================
Question 06:
Write a C program to display addresses
of multiple variables.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declarations
    int a = 10, b = 20;

    // Display addresses
    printf("Address of A = %u\n", &a);

    printf("Address of B = %u", &b);
}

/*
OUTPUT:
Address of A = 6422292
Address of B = 6422288
*/