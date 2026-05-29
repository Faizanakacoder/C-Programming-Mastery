/*
===========================================
Question 08:
Write a C program to swap two
array elements using pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    // Array declaration
    int arr[2] = {10, 20};

    // Pointer declarations
    int *p1 = &arr[0];
    int *p2 = &arr[1];

    // Temporary variable
    int temp;

    // Swapping array elements
    temp = *p1;

    *p1 = *p2;

    *p2 = temp;

    // Display swapped array
    printf("First Element = %d\n", arr[0]);

    printf("Second Element = %d", arr[1]);
}

/*
OUTPUT:
First Element = 20
Second Element = 10
*/