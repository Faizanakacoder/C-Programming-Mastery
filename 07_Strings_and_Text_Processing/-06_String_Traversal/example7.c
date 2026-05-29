/*
===========================================
Question 07:
Write a C program to sort array using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, j, temp;
    int *p = arr;

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    for(i = 0; i < 5; i++)
        printf("%d ", *(p + i));
}

/*
OUTPUT:
1 2 3 4 5
*/