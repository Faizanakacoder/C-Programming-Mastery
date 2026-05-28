/*
===========================================
Q6. Countdown using head recursion.
===========================================
*/

#include<stdio.h>

void count(int n)
{
    if(n == 0)
        return;

    count(n - 1);

    printf("%d ", n);
}

int main()
{
    count(10);

    return 0;
}