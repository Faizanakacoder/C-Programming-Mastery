/*
===========================================
Question 09:
Write a C program using
user input with character pointer.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variable
    char ch;

    // Pointer declaration
    char *ptr = &ch;

    // User input
    printf("Enter Character: ");
    scanf("%c", &ch);

    // Display character
    printf("Entered Character = %c", *ptr);
}

/*
OUTPUT:
Enter Character: A
Entered Character = A
*/