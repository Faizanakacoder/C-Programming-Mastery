/*
===========================================
Question 03:
Write a C program to count spaces in text.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0, spaces = 0;

    printf("Enter Text: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            spaces++;
        }

        i++;
    }

    printf("Total Spaces = %d", spaces);
}

/*
OUTPUT:
Enter Text: I LOVE C
Total Spaces = 2
*/