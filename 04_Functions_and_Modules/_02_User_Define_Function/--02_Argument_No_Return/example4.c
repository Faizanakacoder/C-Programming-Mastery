/*
===========================================
Question:
Check whether number is even or odd using function.
===========================================
*/

#include <stdio.h>

void check(int n)
{
    if(n % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    check(n);

    return 0;
}