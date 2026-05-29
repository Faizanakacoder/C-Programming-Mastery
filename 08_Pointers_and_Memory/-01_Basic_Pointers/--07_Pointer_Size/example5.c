/*
===========================================
Question 05:
Write a C program to find size
of void pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Void pointer declaration
    void *vp;

    // Display pointer size
    printf("Void Pointer Size = %d bytes", sizeof(vp));
}

/*
OUTPUT:
Void Pointer Size = 8 bytes
*/