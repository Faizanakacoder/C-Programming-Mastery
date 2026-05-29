/*
===========================================
Question 08:
Write a C program to display string character by character.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[] = "HELLO";
    int i = 0;

    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}

/*
OUTPUT:
H
E
L
L
O
*/