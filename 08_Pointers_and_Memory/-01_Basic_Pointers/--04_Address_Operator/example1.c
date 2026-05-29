/*
===========================================
Question 01:
Write a C program to display address
of an integer variable using
address operator.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable declaration
    int num = 10;

    // Display value of variable
    printf("Value = %d\n", num);

    // Display address using &
    printf("Address = %u", &num);
}

/*
OUTPUT:
Value = 10
Address = 6422292
*/