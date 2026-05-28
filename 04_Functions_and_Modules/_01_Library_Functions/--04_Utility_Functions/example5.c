# 📄 05_free_function.c

/*
===========================================
Question:
Write a C program to allocate
and release memory using free().
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;

    ptr = (int*)malloc(sizeof(int));

    *ptr = 100;

    printf("Before Free = %d\n", *ptr);

    free(ptr);

    printf("Memory Released");
}

/*
--------------- OUTPUT ----------------

Before Free = 100
Memory Released

---------------------------------------
*/
```
