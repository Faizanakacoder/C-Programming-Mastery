/*
===========================================
Question:
Write a C program to reverse an array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

/*
OUTPUT:
Enter 5 elements:
1 2 3 4 5
Reverse:
5 4 3 2 1
*/