/*
===========================================
Question 05:
Write a C program to find minimum element in 3D array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2][2], i, j, k, min;

    printf("Enter 8 elements:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                scanf("%d", &arr[i][j][k]);

    min = arr[0][0][0];

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                if(arr[i][j][k] < min)
                    min = arr[i][j][k];

    printf("Min = %d", min);
}

/*
OUTPUT:
Min = 1
*/