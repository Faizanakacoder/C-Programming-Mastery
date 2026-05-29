/*
===========================================
Question 07:
Write a C program using
integer pointer with user input.
===========================================
*/

#include<stdio.h>

void main()
{
    // Variable declaration
    int num;

    // Pointer declaration
    int *ptr = &num;

    // User input
    printf("Enter Number: ");
    scanf("%d", &num);

    // Display using pointer
    printf("Entered Number = %d", *ptr);
}

/*
OUTPUT:
Enter Number: 45
Entered Number = 45
*/