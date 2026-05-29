/*
===========================================
Question 09:
Write a C program showing relationship
between variable and pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int x = 200;

    int *p = &x;

    printf("Variable Value = %d\n", x);

    printf("Variable Address = %u\n", &x);

    printf("Pointer Stores = %u\n", p);

    printf("Dereferenced Value = %d", *p);
}

/*
OUTPUT:
Variable Value = 200
Variable Address = 6422292
Pointer Stores = 6422292
Dereferenced Value = 200
*/