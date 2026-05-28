/*
===========================================
Question 05:
Write a C program to reverse array using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i;
    int *p = arr;

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    printf("Reverse:\n");

    for(i = 4; i >= 0; i--)
        printf("%d ", *(p + i));
}

/*
OUTPUT:
5 4 3 2 1
*/