/*
===========================================
Q4. Find sum using indirect recursion.
===========================================
*/

#include<stdio.h>

void B(int n, int *sum);

void A(int n, int *sum)
{
    if(n > 0)
    {
        *sum += n;
        B(n - 1, sum);
    }
}

void B(int n, int *sum)
{
    if(n > 0)
    {
        *sum += n;
        A(n - 1, sum);
    }
}

int main()
{
    int sum = 0;

    A(5, &sum);

    printf("Sum = %d", sum);

    return 0;
}