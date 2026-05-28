/*
===========================================
Question:07
Write a C program for diagonal elements.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2], i, j;

    printf("Enter matrix:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &arr[i][j]);

    printf("Diagonal Elements: ");

    for(i = 0; i < 2; i++)
        printf("%d ", arr[i][i]);

}

/*
OUTPUT:
Diagonal Elements: 1 4
*/