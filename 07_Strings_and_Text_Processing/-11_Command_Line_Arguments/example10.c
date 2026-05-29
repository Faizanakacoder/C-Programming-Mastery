/*
===========================================
Question 10:
Write a C program to perform simple
calculator operations using command
line arguments.
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d", a / b);

    return 0;
}

/*
OUTPUT:
Input:
program.exe 20 10

Output:
Addition = 30
Subtraction = 10
Multiplication = 200
Division = 2
*/