/*
===========================================
Q7. Count digits using recursion.
===========================================
*/

#include<stdio.h>

int count(int n)
{
    if(n == 0)
        return 0;

    return 1 + count(n / 10);
}

int main()
{
    printf("Count = %d", count(12345));

    return 0;
}