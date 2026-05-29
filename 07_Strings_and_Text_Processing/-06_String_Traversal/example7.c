/*
===========================================
Question 07:
Write a C program for string traversal
using while loop.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0;

    printf("Enter String: ");
    gets(str);

    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}

/*
OUTPUT:
Enter String: WORLD
W
O
R
L
D
*/