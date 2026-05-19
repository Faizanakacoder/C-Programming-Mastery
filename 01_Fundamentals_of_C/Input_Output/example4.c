/*
========================================
Program : Student Information
Topic   : Input and Output
Author  : Faizanakacoder
========================================
*/

#include <stdio.h>

int main()
{
    char name[30];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nStudent Details\n");
    printf("Name : %s\n", name);
    printf("Age  : %d", age);

    return 0;
}