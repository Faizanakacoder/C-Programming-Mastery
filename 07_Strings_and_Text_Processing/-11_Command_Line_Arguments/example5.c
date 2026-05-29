/*
===========================================
Question 05:
Write a C program to display name
using command line argument.
===========================================
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Name = %s", argv[1]);

    return 0;
}

/*
OUTPUT:
Input:
program.exe FAIZAN

Output:
Name = FAIZAN
*/