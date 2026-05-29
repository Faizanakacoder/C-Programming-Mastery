/*
===========================================
Question 09:
Write a C program to reverse each string
in array of strings.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char names[3][20];
    int i;

    printf("Enter 3 Strings:\n");

    for(i = 0; i < 3; i++)
    {
        gets(names[i]);
    }

    printf("\nReversed Strings:\n");

    for(i = 0; i < 3; i++)
    {
        strrev(names[i]);
        puts(names[i]);
    }
}

/*
OUTPUT:
Enter 3 Strings:
HELLO
WORLD
PROGRAM

Reversed Strings:
OLLEH
DLROW
MARGORP
*/