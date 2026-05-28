/*
===========================================
Q9. Write a C program to find sum of digits.
===========================================
*/

#include<stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    while(n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int result;

    result = sumDigits(456);

    printf("Sum of Digits = %d", result);

    return 0;
}