/*
===========================================
Question 01:
Write a C program to input and display a
3D array (2x2x2 matrix).
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

    printf("3D Array:\n");

    for(i = 0; i < 2; i++)
    {
        printf("Layer %d:\n", i);

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
Enter 8 elements:
1 2 3 4 5 6 7 8

3D Array:
Layer 0:
1 2
3 4

Layer 1:
5 6
7 8
*/