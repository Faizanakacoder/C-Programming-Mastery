/*
===========================================
Question 02:
Write a C program to declare a
character pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    char ch = 'A';

    char *ptr = &ch;

    printf("Character = %c\n", ch);

    printf("Address = %u", ptr);
}

/*
OUTPUT:
Character = A
Address = 6422291
*/