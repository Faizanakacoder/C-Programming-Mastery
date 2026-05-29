/*
===========================================
Question 03:
Write a C program to input and display string.
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