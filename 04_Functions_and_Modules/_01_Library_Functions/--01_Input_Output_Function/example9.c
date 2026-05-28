# 📄 09_character_input.c

```c id="y49krn"
/*
===========================================
Question:
Write a C program to take
multiple character inputs.
===========================================
*/

#include<stdio.h>

void main()
{
    char ch1,ch2;

    printf("Enter First Character: ");
    scanf(" %c",&ch1);

    printf("Enter Second Character: ");
    scanf(" %c",&ch2);

    printf("First Character = %c\n", ch1);
    printf("Second Character = %c", ch2);
}
```
