/*
===========================================
Q7. Power using tail recursion.
===========================================
*/

#include<stdio.h>

void power(int base, int exp, int result)
{
    if(exp == 0)
    {
        printf("Result = %d", result);
        return;
    }

    power(base, exp - 1, result * base);
}

int main()
{
    power(2, 5, 1);

    return 0;
}