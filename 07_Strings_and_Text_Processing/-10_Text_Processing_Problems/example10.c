/*
===========================================
Question 10:
Write a C program to demonstrate array addresses using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i;
    int *p = arr;

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    for(i = 0; i < 5; i++)
        printf("arr[%d] Address = %u\n", i, (p + i));
}

/*
OUTPUT:
Addresses of array elements
*/