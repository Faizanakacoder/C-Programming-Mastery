/*
===========================================
Question:
Write a C program to find sum of digits
of a number.
===========================================
*/

#include<stdio.h>

void main()
{
    int n = 123, sum = 0;

    while(n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }

    printf("Sum = %d", sum);
}