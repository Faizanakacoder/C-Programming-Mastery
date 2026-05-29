/*
===========================================
Question 04:
Write a C program to swap two
character values using pointers.
===========================================
*/

#include<stdio.h>

void main()
{
    // Character variables
    char ch1 = 'A', ch2 = 'B', temp;

    // Pointer declarations
    char *p1 = &ch1;
    char *p2 = &ch2;

    // Swapping characters
    temp = *p1;

    *p1 = *p2;

    *p2 = temp;

    // Display result
    printf("CH1 = %c\n", ch1);

    printf("CH2 = %c", ch2);
}

/*
OUTPUT:
CH1 = B
CH2 = A
*/