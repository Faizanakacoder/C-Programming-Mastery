/*
===========================================
Question:02
Write a C program for matrix addition.
===========================================
*/

#include<stdio.h>

void main()
{
    int a[2][2], b[2][2], sum[2][2], i, j;

    printf("Enter Matrix A:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter Matrix B:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Result:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

/*
OUTPUT:
Matrix A:
1 2
3 4

Matrix B:
5 6
7 8

Result:
6 8
10 12
*/