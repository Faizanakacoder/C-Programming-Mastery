/*
===========================================
Question 08:
Write a C program to count even and odd using function.
===========================================
*/

#include<stdio.h>

void count(int arr[], int size)
{
    int i, even = 0, odd = 0;

    for(i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\nOdd = %d", even, odd);
}

void main()
{
    int arr[5], i;

    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    count(arr, 5);
}

/*
OUTPUT:
Even = 3
Odd = 2
*/