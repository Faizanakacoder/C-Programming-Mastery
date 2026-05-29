/*
===========================================
Question 01:
Write a C program to display array using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i;
    int *p;

    p = arr;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    printf("Array Elements:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", *(p + i));
}

/*
OUTPUT:
1 2 3 4 5
1 2 3 4 5
*/