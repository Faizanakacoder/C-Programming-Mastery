/*
===========================================
Question:
Write a C program to print multiplication
table of a given number.
===========================================
*/

#include<stdio.h>

void main()
{
    int n = 5, i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}