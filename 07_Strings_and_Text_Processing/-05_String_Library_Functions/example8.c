/*
===========================================
Question 08:
Write a C program to search character
using strchr().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100], ch;

    printf("Enter String: ");
    gets(str);

    printf("Enter Character: ");
    scanf("%c", &ch);

    if(strchr(str, ch) != NULL)
        printf("Character Found");
    else
        printf("Character Not Found");
}

/*
OUTPUT:
Enter String: HELLO
Enter Character: E
Character Found
*/