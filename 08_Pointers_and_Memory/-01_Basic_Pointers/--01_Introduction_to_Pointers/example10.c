/*
===========================================
Question 10:
Write a basic C program demonstrating
pointer concepts.
===========================================
*/

#include<stdio.h>

void main()
{
    int number = 75;

    int *ptr = &number;

    printf("Number = %d\n", number);

    printf("Address = %u\n", &number);

    printf("Pointer = %u\n", ptr);

    printf("Value using Pointer = %d", *ptr);
}

/*
OUTPUT:
Number = 75
Address = 6422292
Pointer = 6422292
Value using Pointer = 75
*/