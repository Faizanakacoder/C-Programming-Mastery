/*
===========================================
Q9. Product of digits using recursion.
===========================================
*/

#include<stdio.h>

int product(int n)
{
    if(n == 0)
        return 1;

    return (n % 10) * product(n / 10);
}

int main()
{
    printf("Product = %d", product(123));

    return 0;
}