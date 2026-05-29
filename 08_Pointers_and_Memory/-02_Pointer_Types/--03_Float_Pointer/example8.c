/*
===========================================
Question 08:
Write a C program using
float pointer with array.
===========================================
*/

#include<stdio.h>

void main()
{
    // Float array
    float arr[5] = {1.1,2.2,3.3,4.4,5.5};

    // Pointer declaration
    float *ptr = arr;

    // Display array values
    printf("%.1f\n", *ptr);

    printf("%.1f\n", *(ptr+1));

    printf("%.1f\n", *(ptr+2));

    printf("%.1f\n", *(ptr+3));

    printf("%.1f", *(ptr+4));
}

/*
OUTPUT:
1.1
2.2
3.3
4.4
5.5
*/