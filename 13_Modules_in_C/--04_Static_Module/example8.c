/*
===========================================
Question: 08
Write a program showing static behavior in loop.
===========================================
*/

#include<stdio.h>

void func()
{
    static int x = 1;
    printf("%d\n", x);
    x++;
}

void main()
{
    int i;

    for(i = 1; i <= 3; i++)
    {
        func();
    }
}

/*
OUTPUT:
1
2
3
*/