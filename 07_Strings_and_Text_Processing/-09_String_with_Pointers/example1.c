/*
===========================================
Question 01:
Write a C program to display string
using pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[] = "HELLO";
    char *ptr;

    ptr = str;

    printf("String = %s", ptr);
}

/*
OUTPUT:
String = HELLO
*/