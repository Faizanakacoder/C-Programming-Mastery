/*
===========================================
Question 10:
Write a C program using
integer pointer with function.
===========================================
*/

#include<stdio.h>

void display(int *ptr)
{
    // Display value
    printf("Value = %d", *ptr);
}

void main()
{
    // Variable declaration
    int num = 500;

    // Function call
    display(&num);
}

/*
OUTPUT:
Value = 500
*/