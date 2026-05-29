/*
===========================================
Question 10:
Write a basic C program
demonstrating void pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 250;

    // Void pointer declaration
    void *ptr = &num;

    // Display address
    printf("Address = %u\n", ptr);

    // Display value
    printf("Value = %d", *(int *)ptr);
}

/*
OUTPUT:
Address = 6422292
Value = 250
*/