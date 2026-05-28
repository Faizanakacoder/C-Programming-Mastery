/*
===========================================
Q8. Write a C program to reverse a number.
===========================================
*/

#include<stdio.h>

int reverse(int n)
{
    int rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int result;

    result = reverse(123);

    printf("Reverse = %d", result);

    return 0;
}