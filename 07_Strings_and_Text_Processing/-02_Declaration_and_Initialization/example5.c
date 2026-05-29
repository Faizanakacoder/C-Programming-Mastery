/*
===========================================
Question 05:
Write a C program for runtime string initialization.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[50];

    printf("Enter String: ");
    scanf("%s", str);

    printf("String = %s", str);
}

/*
OUTPUT:
Enter String: HELLO
String = HELLO
*/