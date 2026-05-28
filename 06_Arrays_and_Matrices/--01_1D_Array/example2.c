/*
===========================================
Question:
Write a C program to find sum of array elements.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, sum = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);
}

/*
OUTPUT:
Enter 5 elements:
1 2 3 4 5
Sum = 15
*/