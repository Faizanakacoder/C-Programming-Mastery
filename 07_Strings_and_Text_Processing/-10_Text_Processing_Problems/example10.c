/*
===========================================
Question 10:
Write a C program to display text statistics.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0;
    int characters = 0, spaces = 0, digits = 0;

    printf("Enter Text: ");
    gets(str);

    while(str[i] != '\0')
    {
        characters++;

        if(str[i] == ' ')
        {
            spaces++;
        }

        if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }

        i++;
    }

    printf("Characters = %d\n", characters);
    printf("Spaces = %d\n", spaces);
    printf("Digits = %d", digits);
}

/*
OUTPUT:
Enter Text: HELLO 123
Characters = 9
Spaces = 1
Digits = 3
*/