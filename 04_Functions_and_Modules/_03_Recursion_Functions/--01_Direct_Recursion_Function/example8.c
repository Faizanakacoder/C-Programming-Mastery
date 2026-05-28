/*
===========================================
Q8. Find maximum digit using recursion.
===========================================
*/

#include<stdio.h>

int maxDigit(int n)
{
    if(n == 0)
        return 0;

    int digit = n % 10;
    int max = maxDigit(n / 10);

    return (digit > max) ? digit : max;
}

int main()
{
    printf("Max Digit = %d", maxDigit(7392));

    return 0;
}