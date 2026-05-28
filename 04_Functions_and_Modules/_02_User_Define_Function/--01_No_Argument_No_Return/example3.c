/*
===========================================
Question:
Write a C program to perform
subtraction using No Argument
No Return function.
===========================================
*/

#include<stdio.h>

void sub();

void main()
{
    sub();
}

void sub()
{
    int a,b,result;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    result = a - b;

    printf("Subtraction = %d",result);
}

/*
--------------- OUTPUT ----------------

Enter Two Numbers: 20 10
Subtraction = 10

---------------------------------------
*/