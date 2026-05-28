/*
===========================================
Q10. Controlled tail recursion example.
===========================================
*/

#include<stdio.h>

void fun(int n)
{
    if(n <= 0)
        return;

    printf("%d ", n);
    fun(n - 2);
}

int main()
{
    fun(10);

    return 0;
}