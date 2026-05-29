/*
===========================================
Question 07:
Write a C program to demonstrate null character.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[5] = {'H','I','\0'};

    printf("%s", str);
}

/*
OUTPUT:
HI
*/