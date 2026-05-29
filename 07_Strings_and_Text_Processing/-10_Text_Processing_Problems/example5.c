/*
===========================================
Question 05:
Write a C program to capitalize first
letter of each word.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0;

    printf("Enter Sentence: ");
    gets(str);

    if(str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    while(str[i] != '\0')
    {
        if(str[i] == ' ' &&
           str[i+1] >= 'a' &&
           str[i+1] <= 'z')
        {
            str[i+1] = str[i+1] - 32;
        }

        i++;
    }

    printf("Modified Sentence = %s", str);
}

/*
OUTPUT:
Enter Sentence: hello world
Modified Sentence = Hello World
*/