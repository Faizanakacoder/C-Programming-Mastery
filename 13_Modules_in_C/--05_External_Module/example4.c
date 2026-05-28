/*
===========================================
Question: 04
Write a counter program using extern variable.
===========================================
*/

#include<stdio.h>

int counter = 0;

void update()
{
    extern int counter;
    counter++;
}

void main()
{
    update();
    update();
    update();

    printf("Counter = %d", counter);
}

/*
OUTPUT:
Counter = 3
*/