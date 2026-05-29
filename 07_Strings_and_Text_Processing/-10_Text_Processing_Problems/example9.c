/*
===========================================
Question 09:
Write a C program to replace character
in text.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100], oldch, newch;
    int i = 0;

    printf("Enter Text: ");
    gets(str);

    printf("Enter Old Character: ");
    scanf("%c", &oldch);

    getchar();

    printf("Enter New Character: ");
    scanf("%c", &newch);

    while(str[i] != '\0')
    {
        if(str[i] == oldch)
        {
            str[i] = newch;
        }

        i++;
    }

    printf("Modified Text = %s", str);
}

/*
OUTPUT:
Enter Text: HELLO
Enter Old Character: L
Enter New Character: X
Modified Text = HEXXO
*/