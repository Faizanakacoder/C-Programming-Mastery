/*
===========================================
Question 05:
Write a C program to input multi-word string using gets().
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];

    printf("Enter Sentence: ");
    gets(str);

    printf("Sentence = %s", str);
}

/*
OUTPUT:
Enter Sentence: I Love C Programming
Sentence = I Love C Programming
*/