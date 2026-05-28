/*
===========================================
Question:
Write a C program to count even and odd numbers.
===========================================
*/

#include<stdio.h>

void main()
{
    int arr[5], i, even = 0, odd = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
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