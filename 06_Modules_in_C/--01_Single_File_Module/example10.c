/*
===========================================
Question:10
Write a C program to check whether a number
is prime or not.
===========================================
*/

#include<stdio.h>

void main()
{
    int n = 7, i, flag = 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Prime Number");
    else
        printf("Not Prime");
}