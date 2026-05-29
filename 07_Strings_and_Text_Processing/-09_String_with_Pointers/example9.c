/*
===========================================
Question 09:
Write a C program for pointer traversal of array.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i;
    int *p = arr;

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    for(i = 0; i < 5; i++)
        printf("Address: %u Value: %d\n", (p + i), *(p + i));
}

/*
OUTPUT:
Address: ... Value: 10
*/