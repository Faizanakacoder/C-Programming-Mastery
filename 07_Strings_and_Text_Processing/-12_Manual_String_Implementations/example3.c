/*
===========================================
Question 03:
Write a C program to find max using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, max;
    int *p = arr;

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    max = *p;

    for(i = 1; i < 5; i++)
        if(*(p + i) > max)
            max = *(p + i);

    printf("Max = %d", max);
}

/*
OUTPUT:
Max = 50
*/