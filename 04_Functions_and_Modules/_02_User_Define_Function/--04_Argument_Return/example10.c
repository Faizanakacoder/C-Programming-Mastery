/*
===========================================
Q10. Write a C program to check prime number
using function.
===========================================
*/

#include<stdio.h>

int isPrime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num = 7;

    if(isPrime(num))
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}