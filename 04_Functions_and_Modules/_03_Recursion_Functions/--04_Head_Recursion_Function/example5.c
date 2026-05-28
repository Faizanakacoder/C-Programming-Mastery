/*
===========================================
Q5. Fibonacci using head recursion.
===========================================
*/

#include<stdio.h>

void fib(int a, int b, int n)
{
    if(n == 0)
        return;

    fib(a, b, n - 1);

    printf("%d ", a);
}

int main()
{
    fib(0, 1, 6);

    return 0;
}