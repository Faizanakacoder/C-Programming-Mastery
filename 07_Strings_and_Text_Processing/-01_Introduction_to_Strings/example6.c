/*
===========================================
Question 06:
Write a C program to display ASCII values of characters.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[] = "ABC";
    int i = 0;

    while(str[i] != '\0')
    {
        printf("%c = %d\n", str[i], str[i]);
        i++;
    }
}

/*
OUTPUT:
A = 65
B = 66
C = 67
*/