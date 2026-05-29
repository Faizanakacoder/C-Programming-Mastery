/*
===========================================
Question 02:
Write a C program to copy one string
to another manually without strcpy().
===========================================
*/

#include<stdio.h>

void main()
{
    char source[100], destination[100];
    int i = 0;

    printf("Enter String: ");
    gets(source);

    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';

    printf("Copied String = %s", destination);
}

/*
OUTPUT:
Enter String: PROGRAM
Copied String = PROGRAM
*/