/*
===========================================
Q10. Pattern printing using head recursion.
===========================================
*/

#include<stdio.h>

void pattern(int n)
{
    if(n == 0)
        return;

    pattern(n - 1);

    printf("* ");
}

int main()
{
    pattern(5);

    return 0;
}