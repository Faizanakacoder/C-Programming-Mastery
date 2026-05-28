/*
===========================================
Question: 04
Write a program using static variable in loop.
===========================================
*/

#include<stdio.h>

void loop()
{
    static int i = 0;
    i++;

    printf("%d\n", i);
}

void main()
{
    loop();
    loop();
    loop();
}

/*
OUTPUT:
1
2
3
*/