/*
===========================================
Question 07:
Write a C program to compare
different pointer sizes.
===========================================
*/

#include<stdio.h>

void main()
{
    // Compare pointer sizes
    printf("Size of int* = %d bytes\n", sizeof(int*));

    printf("Size of char* = %d bytes\n", sizeof(char*));

    printf("Size of float* = %d bytes", sizeof(float*));
}

/*
OUTPUT:
Size of int* = 8 bytes
Size of char* = 8 bytes
Size of float* = 8 bytes
*/