/*
===========================================
Q9. Print even numbers using tail recursion.
===========================================
*/

#include<stdio.h>

void even(int n)
{
    if(n == 0)
        return;

    if(n % 2 == 0)
        printf("%d ", n);

    even(n - 1);
}

int main()
{
    even(10);

    return 0;
}