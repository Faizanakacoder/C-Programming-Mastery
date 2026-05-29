/*
===========================================
Question 09:
Write a C program using
void pointer with function.
===========================================
*/

#include<stdio.h>

void display(void *ptr)
{
    // Display integer value
    printf("Value = %d", *(int *)ptr);
}

void main()
{
    // Integer variable
    int num = 999;

    // Function call
    display(&num);
}

/*
OUTPUT:
Value = 999
*/