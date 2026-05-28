/*
===========================================
Question:01
Write a C program to input and display a matrix.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][3], i, j;

    printf("Enter 6 elements:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

/*
OUTPUT:
Enter 6 elements:
1 2 3 4 5 6

Matrix:
1 2 3
4 5 6
*/