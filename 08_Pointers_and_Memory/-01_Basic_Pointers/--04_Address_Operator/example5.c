/*
===========================================
Question 05:
Write a C program to display both
value and address of variable.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 100;

    // Display variable value
    printf("Value = %d\n", num);

    // Display variable address
    printf("Address = %u", &num);
}

/*
OUTPUT:
Value = 100
Address = 6422292
*/