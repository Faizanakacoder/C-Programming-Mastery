/*
===========================================
Question 01:
Write a C program to count total words
in a sentence.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i = 0, words = 1;

    printf("Enter Sentence: ");
    gets(str);

    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            words++;
        }

        i++;
    }

    printf("Total Words = %d", words);
}

/*
OUTPUT:
Enter Sentence: I LOVE C
Total Words = 3
*/