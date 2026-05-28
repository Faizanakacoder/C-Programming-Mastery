/*
===========================================
Q10. Controlled stop using indirect recursion.
===========================================
*/

#include<stdio.h>

void B(int n);

void A(int n)
{
    if(n == 0)
    {
        printf("Stop at A\n");
        return;
    }

    B(n);
}

void B(int n)
{
    if(n == 1)
    {
        printf("Stop at B\n");
        return;
    }

    A(n - 1);
}

int main()
{
    A(3);

    return 0;
}