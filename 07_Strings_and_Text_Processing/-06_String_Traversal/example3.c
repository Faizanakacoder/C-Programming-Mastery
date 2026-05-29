/*
===========================================
Question 03:
Write a C program to print string character-by-character.
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
        printf("\nCharacter = %c", str[i]);
    }
}

/*
OUTPUT:
Enter String: HELLO

Character = H
Character = E
Character = L
Character = L
Character = O
*/