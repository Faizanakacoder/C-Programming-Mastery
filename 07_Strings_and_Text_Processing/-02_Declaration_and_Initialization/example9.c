/*
===========================================
Question 09:
Write a C program to reinitialize string using strcpy().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[20] = "HELLO";

    strcpy(str, "WORLD");

    printf("%s", str);
}

/*
OUTPUT:
WORLD
*/