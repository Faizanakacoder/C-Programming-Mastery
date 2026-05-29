/*
===========================================
Question 10:
Write a C program to count total strings
stored in array of strings.
===========================================
*/

#include<stdio.h>

void main()
{
    char names[5][20] =
    {
        "RAM",
        "AMAN",
        "SOHAN",
        "ROHAN",
        "VIKAS"
    };

    int total;

    total = sizeof(names) / sizeof(names[0]);

    printf("Total Strings = %d", total);
}

/*
OUTPUT:
Total Strings = 5
*/