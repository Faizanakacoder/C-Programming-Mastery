/*
===========================================
Question 08:
Write a C program to count vowels
using pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    char *ptr;
    int vowels = 0;

    printf("Enter String: ");
    gets(str);

    ptr = str;

    while(*ptr != '\0')
    {
        if(*ptr=='A'||*ptr=='E'||*ptr=='I'||
           *ptr=='O'||*ptr=='U'||*ptr=='a'||
           *ptr=='e'||*ptr=='i'||*ptr=='o'||
           *ptr=='u')
        {
            vowels++;
        }

        ptr++;
    }

    printf("Total Vowels = %d", vowels);
}

/*
OUTPUT:
Enter String: HELLO
Total Vowels = 2
*/