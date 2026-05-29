/*
===========================================
Question 09:
Write a C program to input and display full sentence.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];

    printf("Enter Sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Sentence = %s", str);
}

/*
OUTPUT:
Enter Sentence: C Programming Language
Sentence = C Programming Language
*/