/*
===========================================
Question: 09
Write a program to show static variable in logic flow.
===========================================
*/

#include<stdio.h>

void demo()
{
    static int x = 0;

    if(x < 3)
    {
        x++;
        printf("%d\n", x);
        demo();
    }
}

void main()
{
    demo();
}

/*
OUTPUT:
1
2
3
*/