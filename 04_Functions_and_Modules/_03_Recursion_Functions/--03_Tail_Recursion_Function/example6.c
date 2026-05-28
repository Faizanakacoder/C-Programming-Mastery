/*
===========================================
Q6. Reverse printing using tail recursion.
===========================================
*/

#include<stdio.h>

void reverse(int n)
{
    if(n == 0)
        return;

    printf("%d ", n % 10);
    reverse(n / 10);
}

int main()
{
    reverse(1234);

    return 0;
}