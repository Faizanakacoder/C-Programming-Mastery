/*
===========================================
Question 03:
Write a C program to add two numbers
using command line arguments.
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, sum;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    sum = a + b;

    printf("Sum = %d", sum);

    return 0;
}

/*
OUTPUT:
Input:
program.exe 10 20

Output:
Sum = 30
*/