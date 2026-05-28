/*
===========================================
Question: 07
Write a C program to check prime number
using Multi File Module concept.
===========================================
*/

#include<stdio.h>

void prime()
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

void main()
{
    prime();
}

/*
OUTPUT:
Prime Number
*/