# 📄 10_random_number_range.c

/*
===========================================
Question:
Write a C program to generate
random number within range.
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;

    n = rand()%100;

    printf("Random Number = %d", n);
}

/*
--------------- OUTPUT ----------------

Random Number = 41

---------------------------------------
*/
```
