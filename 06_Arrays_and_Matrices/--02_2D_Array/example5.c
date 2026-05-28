/*
===========================================
Question:05
Write a C program for row sum.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2], i, j, sum;

    printf("Enter matrix:\n");

    for(i = 0; i < 2; i++)
    {
        sum = 0;

        for(j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }

        for(j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }

        printf("Row %d Sum = %d\n", i, sum);
    }
}

/*
OUTPUT:
Row 0 Sum = 3
Row 1 Sum = 7
*/