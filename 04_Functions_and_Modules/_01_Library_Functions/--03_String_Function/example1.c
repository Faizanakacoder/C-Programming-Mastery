# 📄 01_strlen.c

```c id="a7j2qk"
/*
===========================================
Question:
Write a C program to find
length of a string using strlen().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    printf("Length = %d", strlen(str));
}

/*
--------------- OUTPUT ----------------

Enter String: Hello
Length = 5

---------------------------------------
*/
```
