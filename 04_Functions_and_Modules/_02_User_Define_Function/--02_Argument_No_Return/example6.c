/*
===========================================
Question:
Find maximum of two numbers.
===========================================
*/

#include <stdio.h>

void max(int a, int b)
{
    if(a > b)
        printf("Max = %d\n", a);
    else
        printf("Max = %d\n", b);
}

int main()
{
    max(10, 20);
    return 0;
}