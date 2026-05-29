/*
===========================================
Question 09:
Write a C program demonstrating
system dependent pointer size.
===========================================
*/

#include<stdio.h>

void main()
{
    // Pointer declaration
    int *ptr;

    // Display pointer size
    printf("System Pointer Size = %d bytes", sizeof(ptr));

    // Explain architecture
    printf("\nDepends on 32-bit or 64-bit system");
}

/*
OUTPUT:
System Pointer Size = 8 bytes
Depends on 32-bit or 64-bit system
*/