/*
===========================================
Question 10:
Write a C program to display 3D matrix in
structured format (layer-wise printing).
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2][2], i, j, k;

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

    printf("\n3D Matrix Structure:\n");

    for(i = 0; i < 2; i++)
    {
        printf("\nLayer %d:\n", i);

        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }
}

/*
OUTPUT:
Layer 0:
1 2
3 4

Layer 1:
5 6
7 8
*/