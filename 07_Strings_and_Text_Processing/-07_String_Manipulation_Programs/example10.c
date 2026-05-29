/*
===========================================
Question 10:
Write a C program to find frequency of each character.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i, j, count;

    printf("Enter String: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        if(str[i] != '0')
        {
            for(j = i + 1; str[j] != '\0'; j++)
            {
                if(str[i] == str[j])
                {
                    count++;
                    str[j] = '0';
                }
            }

            printf("%c = %d\n", str[i], count);
        }
    }
}

/*
OUTPUT:
Enter String: HELLO
H = 1
E = 1
L = 2
O = 1
*/