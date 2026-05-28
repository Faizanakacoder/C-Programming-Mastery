/*
===========================================
Question 03:
Write a C program to search element in 3D array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2][2], i, j, k, key, flag = 0;

    printf("Enter 8 elements:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                scanf("%d", &arr[i][j][k]);

    printf("Enter key: ");
    scanf("%d", &key);

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                if(arr[i][j][k] == key)
                    flag = 1;
            }
        }
    }

    if(flag)
        printf("Found");
    else
        printf("Not Found");
}

/*
OUTPUT:
Found
*/