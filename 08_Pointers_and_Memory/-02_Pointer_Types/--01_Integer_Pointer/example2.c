/*
===========================================
Question 02:
Write a C program to store
address in integer pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer variable
    int num = 50;

    // Integer pointer
    int *ptr = &num;

    // Display address
    printf("Address = %u", ptr);
}

/*
OUTPUT:
Address = 6422292
*/