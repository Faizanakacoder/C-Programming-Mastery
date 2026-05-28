/*
===========================================
Q1. Demonstrate indirect recursion using
two functions A and B.
===========================================
*/

#include<stdio.h>

void B(int n);

void A(int n)
{
    if(n > 0)
    {
        printf("A: %d\n", n);
        B(n - 1);
    }
}

void B(int n)
{
    if(n > 0)
    {
        printf("B: %d\n", n);
        A(n - 1);
    }
}

int main()
{
    A(5);

    return 0;
}