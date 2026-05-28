/*
===========================================
Question 07:
Write a C program to sort array using function.
===========================================
*/

#include<stdio.h>

void sort(int arr[], int size)
{
    int i, j, temp;

    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    sort(arr, 5);

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

/*
OUTPUT:
1 2 3 4 5
*/