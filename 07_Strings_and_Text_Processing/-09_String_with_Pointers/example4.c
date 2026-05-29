/*
===========================================
Question 04:
Write a C program to copy string
using pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    char str1[100], str2[100];
    char *source, *destination;

    printf("Enter String: ");
    gets(str1);

    source = str1;
    destination = str2;

    while(*source != '\0')
    {
        *destination = *source;

        source++;
        destination++;
    }

    *destination = '\0';

    printf("Copied String = %s", str2);
}

/*
OUTPUT:
Enter String: HELLO
Copied String = HELLO
*/