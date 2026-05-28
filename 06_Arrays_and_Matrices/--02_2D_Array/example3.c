/*
===========================================
Question:03
Write a C program for matrix subtraction.
===========================================
*/

#include<stdio.h>

void main()
{
    int a[2][2], b[2][2], sub[2][2], i, j;

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
            sub[i][j] = a[i][j] - b[i][j];

    printf("Result:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
}

/*
OUTPUT:
Result:
-4 -4
-4 -4
*/