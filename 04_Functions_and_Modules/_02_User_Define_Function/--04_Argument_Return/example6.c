/*
===========================================
Q6. Write a C program to find square of a number.
===========================================
*/

#include<stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int result;

    result = square(6);

    printf("Square = %d", result);

    return 0;
}