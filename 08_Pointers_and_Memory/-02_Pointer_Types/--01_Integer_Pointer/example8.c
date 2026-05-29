/*
===========================================
Question 08:
Write a C program using
integer pointer with array.
===========================================
*/

#include<stdio.h>

void main()
{
    // Array declaration
    int arr[5] = {1,2,3,4,5};

    // Pointer declaration
    int *ptr = arr;

    // Display array using pointer
    printf("Array Elements:\n");

    printf("%d\n", *ptr);

    printf("%d\n", *(ptr+1));

    printf("%d\n", *(ptr+2));

    printf("%d\n", *(ptr+3));

    printf("%d", *(ptr+4));
}

/*
OUTPUT:
Array Elements:
1
2
3
4
5
*/