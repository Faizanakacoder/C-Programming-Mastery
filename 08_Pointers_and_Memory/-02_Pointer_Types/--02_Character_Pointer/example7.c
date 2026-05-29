/*
===========================================
Question 07:
Write a C program using
character pointer with string.
===========================================
*/

#include<stdio.h>

void main()
{
    // String declaration
    char str[] = "HELLO";

    // Pointer declaration
    char *ptr = str;

    // Display string
    printf("String = %s", ptr);
}

/*
OUTPUT:
String = HELLO
*/