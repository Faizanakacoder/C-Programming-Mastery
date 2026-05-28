/*
===========================================
Question 09:
Write a C program to find second largest using function.
===========================================
*/

#include<stdio.h>

void secondLargest(int arr[], int size)
{
    int i, max1 = arr[0], max2 = arr[0];

    for(i = 0; i < size; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2)
        {
            max2 = arr[i];
        }
    }

    printf("Second Largest = %d", max2);
}

void main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    secondLargest(arr, 5);
}

/*
OUTPUT:
Second Largest = 40
*/