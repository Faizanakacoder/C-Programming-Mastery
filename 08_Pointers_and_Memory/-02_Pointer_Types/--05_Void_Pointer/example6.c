/*
===========================================
Question 06:
Write a C program using
void pointer with array.
===========================================
*/

#include<stdio.h>

void main()
{
    // Integer array
    int arr[3] = {10,20,30};

    // Void pointer declaration
    void *ptr = arr;

    // Display array elements
    printf("%d\n", *((int *)ptr));

    printf("%d\n", *((int *)ptr + 1));

    printf("%d", *((int *)ptr + 2));
}

/*
OUTPUT:
10
20
30
*/