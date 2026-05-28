/*
===========================================
Question 10:
Write a C program to find frequency using function.
===========================================
*/

#include<stdio.h>

void frequency(int arr[], int size)
{
    int i, j, count;

    for(i = 0; i < size; i++)
    {
        count = 1;

        for(j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        printf("%d occurs %d times\n", arr[i], count);
    }
}

void main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    frequency(arr, 5);
}

/*
OUTPUT:
1 occurs 1 times
2 occurs 2 times
3 occurs 1 times
*/