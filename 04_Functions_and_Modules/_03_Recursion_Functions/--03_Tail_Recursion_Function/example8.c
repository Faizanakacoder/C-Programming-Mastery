/*
===========================================
Q8. Sum of digits using tail recursion.
===========================================
*/

#include<stdio.h>

void sumDigits(int n, int sum)
{
    if(n == 0)
    {
        printf("Sum = %d", sum);
        return;
    }

    sumDigits(n / 10, sum + (n % 10));
}

int main()
{
    sumDigits(1234, 0);

    return 0;
}