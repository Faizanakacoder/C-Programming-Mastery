/*
===========================================
Question 07:
Write a C program to find character frequency.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter String: ");
    gets(str);

    printf("Enter Character: ");
    scanf("%c", &ch);

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }

        i++;
    }

    printf("Frequency = %d", count);
}

/*
OUTPUT:
Enter String: HELLO
Enter Character: L
Frequency = 2
*/