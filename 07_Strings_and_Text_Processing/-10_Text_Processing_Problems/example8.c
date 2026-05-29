/*
===========================================
Question 08:
Write a C program to count even and odd using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, even = 0, odd = 0;
    int *p = arr;

    for(i = 0; i < 5; i++)
        scanf("%d", p + i);

    for(i = 0; i < 5; i++)
    {
        if(*(p + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\nOdd = %d", even, odd);
}

/*
OUTPUT:
Even = 3
Odd = 2
*/