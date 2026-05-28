/*
===========================================
Question:
Find factorial of a number using function.
===========================================
*/

#include <stdio.h>

void fact(int n)
{
    int f = 1;

    for(int i = 1; i <= n; i++)
        f *= i;

    printf("Factorial = %d\n", f);
}

int main()
{
    fact(5);
    return 0;
}