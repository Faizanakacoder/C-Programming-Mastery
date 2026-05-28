/*
===========================================
Q5. Find sum of digits using recursion.
===========================================
*/

#include<stdio.h>

int sumDigits(int n)
{
    if(n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    printf("Sum = %d", sumDigits(1234));

    return 0;
}