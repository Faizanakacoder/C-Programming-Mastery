/*
===========================================
Question 08:
Write a C program for string traversal
using for loop.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i;

    printf("Enter String: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c ", str[i]);
    }
}

/*
OUTPUT:
Enter String: PROGRAM
P R O G R A M
*/