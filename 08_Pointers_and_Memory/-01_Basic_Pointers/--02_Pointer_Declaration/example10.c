/*
===========================================
Question 10:
Write a C program demonstrating
basic pointer declaration concepts.
===========================================
*/

#include<stdio.h>

void main()
{
    int num = 25;

    int *ptr = &num;

    printf("Number = %d\n", num);

    printf("Address = %u\n", ptr);

    printf("Value using Pointer = %d", *ptr);
}

/*
OUTPUT:
Number = 25
Address = 6422292
Value using Pointer = 25
*/