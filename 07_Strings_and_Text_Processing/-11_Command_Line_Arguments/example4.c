/*
===========================================
Question 04:
Write a C program to multiply two numbers
using command line arguments.
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, multiplication;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    multiplication = a * b;

    printf("Multiplication = %d", multiplication);

    return 0;
}

/*
OUTPUT:
Input:
program.exe 5 4

Output:
Multiplication = 20
*/