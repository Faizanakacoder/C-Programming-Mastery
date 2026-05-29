/*
===========================================
Question 09:
Write a C program using
double pointer with array.
===========================================
*/

#include<stdio.h>

void main()
{
    // Array declaration
    int arr[3] = {10,20,30};

    // Pointer declaration
    int *ptr = arr;

    // Double pointer declaration
    int **dptr = &ptr;

    // Display array values
    printf("%d\n", **dptr);

    printf("%d\n", *(*dptr + 1));

    printf("%d", *(*dptr + 2));
}

/*
OUTPUT:
10
20
30
*/