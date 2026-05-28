# 📄 03_malloc_function.c

/*
===========================================
Question:
Write a C program to allocate
memory using malloc().
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;

    ptr = (int*)malloc(sizeof(int));

    *ptr = 50;

    printf("Value = %d", *ptr);
}

/*
--------------- OUTPUT ----------------

Value = 50

---------------------------------------
*/
```
