# 📄 04_calloc_function.c

/*
===========================================
Question:
Write a C program to allocate
memory using calloc().
===========================================
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr;

    ptr = (int*)calloc(5,sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;

    printf("%d\n", ptr[0]);
    printf("%d", ptr[1]);
}

/*
--------------- OUTPUT ----------------

10
20

---------------------------------------
*/
```
