/*
===========================================
Question:
Write a C program to find second largest element.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, max1, max2;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = arr[0];

    for(i = 1; i < 5; i++)
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

/*
OUTPUT:
Second Largest = 40
*/