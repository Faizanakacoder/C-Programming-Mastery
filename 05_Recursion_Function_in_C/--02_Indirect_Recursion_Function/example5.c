/*
===========================================
Q5. Alternate printing using indirect recursion.
===========================================
*/

#include<stdio.h>

void B(int n);

void A(int n)
{
    if(n > 0)
    {
        printf("A -> %d\n", n);
        B(n - 1);
    }
}

void B(int n)
{
    if(n > 0)
    {
        printf("B -> %d\n", n);
        A(n - 2);
    }
}

int main()
{
    A(6);

    return 0;
}