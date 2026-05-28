/*
===========================================
Question:
Write a C program to input and display
1D array elements using user input.
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

    printf("Array Elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

/*
OUTPUT:
Enter 5 elements:
10 20 30 40 50
Array Elements:
10 20 30 40 50
*/