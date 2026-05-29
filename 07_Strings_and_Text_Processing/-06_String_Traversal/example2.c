/*
===========================================
Question 02:
Write a C program for backward string traversal.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    int i, length;

    printf("Enter String: ");
    gets(str);

    length = strlen(str);

    for(i = length-1; i >= 0; i--)
    {
        printf("%c ", str[i]);
    }
}

/*
OUTPUT:
Enter String: HELLO
O L L E H
*/