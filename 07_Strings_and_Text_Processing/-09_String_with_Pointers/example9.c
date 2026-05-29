/*
===========================================
Question 09:
Write a C program to print each character
using pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    char *ptr;

    printf("Enter String: ");
    gets(str);

    ptr = str;

    while(*ptr != '\0')
    {
        printf("\nCharacter = %c", *ptr);
        ptr++;
    }
}

/*
OUTPUT:
Enter String: WORLD

Character = W
Character = O
Character = R
Character = L
Character = D
*/