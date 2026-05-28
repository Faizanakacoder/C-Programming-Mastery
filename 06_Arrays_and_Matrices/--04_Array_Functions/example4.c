/*
===========================================
Question 04:
Write a C program to find min using function.
===========================================
*/

#include<stdio.h>

int min(int arr[], int size)
{
    int i, m = arr[0];

    for(i = 1; i < size; i++)
        if(arr[i] < m)
            m = arr[i];

    return m;
}

void main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Min = %d", min(arr, 5));
}

/*
OUTPUT:
Min = 5
*/