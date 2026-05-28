/*
===========================================
Question:
Write a C program to perform
division using No Argument
No Return function.
===========================================
*/

#include<stdio.h>

void divide();

void main()
{
    divide();
}

void divide()
{
    int a,b;

    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);

    printf("Division = %d",a/b);
}

/*
--------------- OUTPUT ----------------

Enter Two Numbers: 20 5
Division = 4

---------------------------------------
*/