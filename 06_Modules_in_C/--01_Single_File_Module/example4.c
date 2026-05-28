/*
===========================================
Question:04
Write a C program to check whether a number
is even or odd.
===========================================
*/

#include<stdio.h>

void main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}