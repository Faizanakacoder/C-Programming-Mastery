/*
===========================================
Question:
Write a C program to find maximum element.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, max;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Maximum = %d", max);
}

/*
OUTPUT:
Enter 5 elements:
10 50 20 40 30
Maximum = 50
*/