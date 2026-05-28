/*
===========================================
Question: 05
Write a program using extern for student data.
===========================================
*/

#include<stdio.h>

int roll = 101;
int marks = 85;

void show()
{
    extern int roll;
    extern int marks;

    printf("Roll = %d, Marks = %d", roll, marks);
}

void main()
{
    show();
}

/*
OUTPUT:
Roll = 101, Marks = 85
*/