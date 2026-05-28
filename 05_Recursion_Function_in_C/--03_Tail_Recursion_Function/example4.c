/*
===========================================
Q4. Fibonacci series using tail recursion.
===========================================
*/

#include<stdio.h>

void fib(int a, int b, int n)
{
    if(n == 0)
        return;

    printf("%d ", a);
    fib(b, a + b, n - 1);
}

int main()
{
    fib(0, 1, 6);

    return 0;
}