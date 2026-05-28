# 📄 06_gets.c

```c id="n0lvqf"
/*
===========================================
Question:
Write a C program to take
string input using gets().
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];

    printf("Enter String: ");

    gets(str);

    printf("You Entered = %s", str);
}
```
