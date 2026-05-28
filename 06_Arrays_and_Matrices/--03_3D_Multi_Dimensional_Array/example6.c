/*
===========================================
Question 06:
Write a C program to find layer-wise sum
of a 3D array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2][2], i, j, k, sum;

    printf("Enter 8 elements:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for(i = 0; i < 2; i++)
    {
        sum = 0;

        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                sum += arr[i][j][k];
            }
        }

        printf("Layer %d Sum = %d\n", i, sum);
    }
}

/*
OUTPUT:
Layer 0 Sum = 10
Layer 1 Sum = 26
*/