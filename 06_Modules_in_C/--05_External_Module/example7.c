/*
===========================================
Question: 07
Write a program using extern flag variable.
===========================================
*/

#include<stdio.h>

int flag = 0;

void setFlag()
{
    extern int flag;
    flag = 1;
}

void main()
{
    setFlag();

    if(flag == 1)
        printf("Flag ON");
}

/*
OUTPUT:
Flag ON
*/