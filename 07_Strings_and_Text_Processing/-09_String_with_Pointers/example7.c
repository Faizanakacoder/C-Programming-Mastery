/*
===========================================
Question 07:
Write a C program to convert string into
uppercase using pointers.
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
        if(*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - 32;
        }

        ptr++;
    }

    printf("Uppercase String = %s", str);
}

/*
OUTPUT:
Enter String: hello
Uppercase String = HELLO
*/