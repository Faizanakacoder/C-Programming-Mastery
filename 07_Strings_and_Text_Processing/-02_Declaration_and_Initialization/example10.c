/*
===========================================
Question 10:
Write a C program to compare two string declarations.
===========================================
*/

#include<stdio.h>

void main()
{
    char str1[] = "HELLO";
    char str2[10] = "WORLD";

    printf("%s\n", str1);
    printf("%s", str2);
}

/*
OUTPUT:
HELLO
WORLD
*/