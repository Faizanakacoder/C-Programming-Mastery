/*
===========================================
Question:
Write a C program to perform
multiplication using No Argument
No Return function.
===========================================
*/

#include<stdio.h>

void multiply();

void main()
{
    multiply();
}

void multiply()
{
    int a,b,result;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    result = a * b;

    printf("Multiplication = %d",result);
}

/*
--------------- OUTPUT ----------------

Enter Two Numbers: 5 4
Multiplication = 20

---------------------------------------
*/