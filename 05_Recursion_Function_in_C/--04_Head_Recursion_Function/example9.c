/*
===========================================
Q9. Reverse number using head recursion.
===========================================
*/

#include<stdio.h>

void reverse(int n)
{
    if(n == 0)
        return;

    reverse(n / 10);

    printf("%d", n % 10);
}

int main()
{
    reverse(1234);

    return 0;
}