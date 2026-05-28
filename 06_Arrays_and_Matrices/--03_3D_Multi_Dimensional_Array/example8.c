/*
===========================================
Question 08:
Write a C program to convert 3D array into
1D array (flattening concept).
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2][2], flat[8];
    int i, j, k, index = 0;

    printf("Enter 8 elements:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                scanf("%d", &arr[i][j][k]);

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                flat[index] = arr[i][j][k];
                index++;
            }
        }
    }

    printf("Flattened Array:\n");

    for(i = 0; i < 8; i++)
    {
        printf("%d ", flat[i]);
    }
}

/*
OUTPUT:
Flattened Array:
1 2 3 4 5 6 7 8
*/