/*
===========================================
Question 02:
Write a C program to count lines in text.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[200];
    int i = 0, lines = 1;

    printf("Enter Text: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == '\n')
        {
            lines++;
        }

        i++;
    }

    printf("Total Lines = %d", lines);
}

/*
OUTPUT:
Enter Text: HELLO
Total Lines = 1
*/