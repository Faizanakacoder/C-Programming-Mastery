/*
===========================================
Question 04:
Write a C program to find min using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, min;
    int *p = arr;

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    min = *p;

    for(i = 1; i < 5; i++)
        if(*(p + i) < min)
            min = *(p + i);

    printf("Min = %d", min);
}

/*
OUTPUT:
Min = 5
*/