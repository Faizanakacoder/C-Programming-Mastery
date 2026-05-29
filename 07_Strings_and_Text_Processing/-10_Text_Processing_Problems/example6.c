/*
===========================================
Question 06:
Write a C program to remove extra spaces
from text.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100], newstr[100];
    int i = 0, j = 0;

    printf("Enter Text: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(!(str[i] == ' ' && str[i+1] == ' '))
        {
            newstr[j++] = str[i];
        }

        i++;
    }

    newstr[j] = '\0';

    printf("Text After Removing Extra Spaces:\n%s", newstr);
}

/*
OUTPUT:
Enter Text: I  LOVE   C
Text After Removing Extra Spaces:
I LOVE C
*/