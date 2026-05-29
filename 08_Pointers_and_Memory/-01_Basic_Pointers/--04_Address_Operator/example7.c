/*
===========================================
Question 07:
Write a C program using address
operator with array.
===========================================
*/

#include<stdio.h>

void main()
{
    // Array declaration
    int arr[3] = {10, 20, 30};

    // Display base address of array
    printf("Address of arr[0] = %u", &arr[0]);
}

/*
OUTPUT:
Address of arr[0] = 6422280
*/