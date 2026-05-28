/*
===========================================
Question:08
Write a C program for transpose of matrix.
===========================================
*/

#include<stdio.h>

void main()
{
    int a[2][2], i, j;

    printf("Enter matrix:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Transpose:\n");

    for(j = 0; j < 2; j++)
    {
        for(i = 0; i < 2; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

/*
OUTPUT:
Transpose matrix shown
*/