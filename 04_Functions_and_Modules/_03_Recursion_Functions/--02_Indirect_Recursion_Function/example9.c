/*
===========================================
Q9. Fibonacci style using indirect recursion.
===========================================
*/

#include<stdio.h>

void B(int a, int b, int n);

void A(int a, int b, int n)
{
    if(n > 0)
    {
        printf("%d ", a);
        B(a, b, n);
    }
}

void B(int a, int b, int n)
{
    if(n > 0)
        A(b, a + b, n - 1);
}

int main()
{
    A(0, 1, 6);

    return 0;
}