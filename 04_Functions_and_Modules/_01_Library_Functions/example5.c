# 📄 05_puts.c

```c id="00mz7p"
/*
===========================================
Question:
Write a C program to display
a string using puts().
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];

    printf("Enter String: ");

    gets(str);

    puts(str);
}
```
