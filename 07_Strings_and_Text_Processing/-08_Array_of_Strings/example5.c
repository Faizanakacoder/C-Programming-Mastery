/*
===========================================
Question 05:
Write a C program to sort names
in alphabetical order.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char names[5][20], temp[20];
    int i, j;

    printf("Enter 5 Names:\n");

    for(i = 0; i < 5; i++)
    {
        gets(names[i]);
    }

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nSorted Names:\n");

    for(i = 0; i < 5; i++)
    {
        puts(names[i]);
    }
}

/*
OUTPUT:
Enter 5 Names:
ROHAN
AMAN
VIKAS
RAM
SOHAN

Sorted Names:
AMAN
RAM
ROHAN
SOHAN
VIKAS
*/