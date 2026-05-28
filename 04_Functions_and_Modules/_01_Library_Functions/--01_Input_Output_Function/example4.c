# 📄 04_putchar.c

```c id="09m2ee"
/*
===========================================
Question:
Write a C program to display
a character using putchar().
===========================================
*/

#include<stdio.h>

void main()
{
    char ch;

    printf("Enter Character: ");
    scanf("%c",&ch);

    printf("Output Character = ");

    putchar(ch);
}
```
