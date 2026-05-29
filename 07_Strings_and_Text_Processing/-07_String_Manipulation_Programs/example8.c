/*
===========================================
Question 08:
Write a C program to replace character in string.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100], oldch, newch;
    int i = 0;

    printf("Enter String: ");
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

    printf("Modified String = %s", str);
}

/*
OUTPUT:
Enter String: HELLO
Enter Old Character: L
Enter New Character: X
Modified String = HEXXO
*/