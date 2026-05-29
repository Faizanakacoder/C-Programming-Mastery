/*
===========================================
Question 03:
Write a C program to display names using loop.
===========================================
*/

#include<stdio.h>

void main()
{
    char names[4][20] =
    {
        "RAHUL",
        "AMAN",
        "SOHAN",
        "VIKAS"
    };

    int i;

    for(i = 0; i < 4; i++)
    {
        printf("%s\n", names[i]);
    }
}

/*
OUTPUT:
RAHUL
AMAN
SOHAN
VIKAS
*/