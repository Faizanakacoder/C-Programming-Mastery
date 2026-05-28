/*
===========================================
Q3. Factorial using tail recursion.
===========================================
*/

#include<stdio.h>

void fact(int n, int f)
{
    if(n == 0 || n == 1)
    {
        printf("Factorial = %d", f);
        return;
    }

    fact(n - 1, f * n);
}

int main()
{
    fact(5, 1);

    return 0;
}