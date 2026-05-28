/*
===========================================
Q2. Check even or odd using indirect recursion.
===========================================
*/

#include<stdio.h>

void odd(int n);
void even(int n);

void even(int n)
{
    if(n == 0)
        printf("Even Number\n");
    else
        odd(n - 1);
}

void odd(int n)
{
    if(n == 0)
        printf("Odd Number\n");
    else
        even(n - 1);
}

int main()
{
    even(7);

    return 0;
}