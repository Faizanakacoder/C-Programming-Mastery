# 📄 02_srand_function.c

/*
===========================================
Question:
Write a C program to generate
random numbers using srand().
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    srand(5);

    printf("Random Number = %d", rand());
}

/*
--------------- OUTPUT ----------------

Random Number = 590011675

---------------------------------------
*/
```
