/*
===========================================
Question 08:
Write a C program demonstrating
array dereference using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Array declaration
    int arr[3] = {10, 20, 30};

    // Pointer stores base address
    int *p = arr;

    // Display array elements using dereference
    printf("%d\n", *p);

    printf("%d\n", *(p+1));

    printf("%d", *(p+2));
}

/*
OUTPUT:
10
20
30
*/