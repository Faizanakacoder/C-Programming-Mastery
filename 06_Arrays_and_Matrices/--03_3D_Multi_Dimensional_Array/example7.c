/*
===========================================
Question 07:
Write a C program to count even and odd
elements in a 3D array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[2][2][2], i, j, k;
    int even = 0, odd = 0;

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

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            {
                if(arr[i][j][k] % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
    }

    printf("Even = %d\nOdd = %d", even, odd);
}

/*
OUTPUT:
Even = 4
Odd = 4
*/