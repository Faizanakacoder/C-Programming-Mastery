/*
===========================================
Question: 04
Write a C program to reverse an array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Reverse:\n");

    for(i = 4; i >= 0; i--)
        printf("%d ", arr[i]);
}

/*
OUTPUT:
Reverse:
5 4 3 2 1
*/