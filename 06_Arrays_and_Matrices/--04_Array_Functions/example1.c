/*
===========================================
Question 01:
Write a C program to display array using function.
===========================================
*/

#include<stdio.h>

void display(int arr[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void main()
{
    int arr[5], i;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    display(arr, 5);
}

/*
OUTPUT:
Enter 5 elements:
1 2 3 4 5
1 2 3 4 5
*/