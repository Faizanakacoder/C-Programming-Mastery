/*
===========================================
Question 02:
Write a C program to input multiple names
using array of strings.
===========================================
*/

#include<stdio.h>

void main()
{
    char names[3][20];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Enter Name: ");
        gets(names[i]);
    }

    printf("\nStored Names:\n");

    for(i = 0; i < 3; i++)
    {
        puts(names[i]);
    }
}

/*
OUTPUT:
Enter Name: RAM
Enter Name: AMAN
Enter Name: SOHAN

Stored Names:
RAM
AMAN
SOHAN
*/