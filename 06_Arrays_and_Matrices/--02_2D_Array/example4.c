/*
===========================================
Question:04
Write a C program to find sum of all elements.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2], i, j, sum = 0;

    printf("Enter 4 elements:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &arr[i][j]);

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            sum += arr[i][j];

    printf("Sum = %d", sum);
}

/*
OUTPUT:
Sum = 10
*/