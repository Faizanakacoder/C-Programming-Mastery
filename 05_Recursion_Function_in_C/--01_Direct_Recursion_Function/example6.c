/*
===========================================
Q6. Reverse a number using recursion.
===========================================
*/

#include<stdio.h>

int reverse(int n, int rev)
{
    if(n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);
}

int main()
{
    printf("Reverse = %d", reverse(123, 0));

    return 0;
}