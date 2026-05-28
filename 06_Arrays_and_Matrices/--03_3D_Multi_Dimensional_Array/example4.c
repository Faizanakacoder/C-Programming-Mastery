/*
===========================================
Question 04:
Write a C program to find maximum element in 3D array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2][2], i, j, k, max;

    printf("Enter 8 elements:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                scanf("%d", &arr[i][j][k]);

    max = arr[0][0][0];

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                if(arr[i][j][k] > max)
                    max = arr[i][j][k];

    printf("Max = %d", max);
}

/*
OUTPUT:
Max = 8
*/