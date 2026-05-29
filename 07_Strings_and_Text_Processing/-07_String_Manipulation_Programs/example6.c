/*
===========================================
Question 06:
Write a C program to count total words in sentence.
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
Enter Sentence: I LOVE C PROGRAMMING
Total Words = 4
*/