/*
===========================================
Question:10
Write a C program to find frequency of elements.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, j, count;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        count = 1;

        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        printf("%d occurs %d times\n", arr[i], count);
    }
}

/*
OUTPUT:
1 occurs 1 times
2 occurs 2 times
3 occurs 1 times
*/