/*
===========================================
Question 02:
Write a C program to find sum using function.
===========================================
*/

#include<stdio.h>

int sum(int arr[], int size)
{
    int i, s = 0;

    for(i = 0; i < size; i++)
        s += arr[i];

    return s;
}

void main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Sum = %d", sum(arr, 5));
}

/*
OUTPUT:
Sum = 15
*/