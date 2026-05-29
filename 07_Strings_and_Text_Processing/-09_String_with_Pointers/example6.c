/*
===========================================
Question 06:
Write a C program to reverse string
using pointers.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    char *start, *end, temp;

    printf("Enter String: ");
    gets(str);

    start = str;
    end = str + strlen(str) - 1;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed String = %s", str);
}

/*
OUTPUT:
Enter String: HELLO
Reversed String = OLLEH
*/