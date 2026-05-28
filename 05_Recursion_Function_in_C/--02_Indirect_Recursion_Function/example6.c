/*
===========================================
Q6. Countdown using indirect recursion.
===========================================
*/

#include<stdio.h>

void B(int n);

void A(int n)
{
    if(n > 0)
    {
        printf("%d ", n);
        B(n - 1);
    }
}

void B(int n)
{
    if(n > 0)
    {
        A(n - 1);
    }
}

int main()
{
    A(5);

    return 0;
}