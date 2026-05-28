/*
===========================================
Question 02:
Write a C program to find sum using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, sum = 0;
    int *p = arr;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    for(i = 0; i < 5; i++)
        sum += *(p + i);

    printf("Sum = %d", sum);
}

/*
OUTPUT:
Sum = 15
*/