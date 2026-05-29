/*
===========================================
Question 08:
Write a C program to count occurrence
of a specific word.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100], word[20];
    int count = 0;

    printf("Enter Sentence: ");
    gets(str);

    printf("Enter Word: ");
    gets(word);

    if(strstr(str, word) != NULL)
    {
        count++;
    }

    printf("Word Frequency = %d", count);
}

/*
OUTPUT:
Enter Sentence: I LOVE C
Enter Word: LOVE
Word Frequency = 1
*/