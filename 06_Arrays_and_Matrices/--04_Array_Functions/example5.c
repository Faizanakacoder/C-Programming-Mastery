/*
===========================================
Question 05:
Write a C program to reverse array using function.
===========================================
*/

#include<stdio.h>

void reverse(int arr[], int size)
{
    int i;

    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    reverse(arr, 5);
}

/*
OUTPUT:
5 4 3 2 1
*/