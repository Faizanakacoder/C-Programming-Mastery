/*
===========================================
Question 09:
Write a C program to print diagonal-like
elements from each layer of 3D array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2][2], i;

    printf("Enter 8 elements:\n");

    for(int x = 0; x < 2; x++)
        for(int y = 0; y < 2; y++)
            for(int z = 0; z < 2; z++)
                scanf("%d", &arr[x][y][z]);

    printf("Diagonal-like Elements:\n");

    for(i = 0; i < 2; i++)
    {
        printf("%d ", arr[i][i][i]);
    }
}

/*
OUTPUT:
Diagonal-like Elements:
1 8
*/