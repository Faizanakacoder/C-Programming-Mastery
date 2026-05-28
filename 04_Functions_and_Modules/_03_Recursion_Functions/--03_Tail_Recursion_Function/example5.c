/*
===========================================
Q5. Countdown using tail recursion.
===========================================
*/

#include<stdio.h>

void count(int n)
{
    if(n == 0)
        return;

    printf("%d ", n);
    count(n - 1);
}

int main()
{
    count(10);

    return 0;
}