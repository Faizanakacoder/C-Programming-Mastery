/*
===========================================
Question 02:
Write a C program to find sum of all elements
in a 3D array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2][2], i, j, k, sum = 0;

    printf("Enter 8 elements:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                scanf("%d", &arr[i][j][k]);

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                sum += arr[i][j][k];

    printf("Sum = %d", sum);
}

/*
OUTPUT:
Sum = 36
*/