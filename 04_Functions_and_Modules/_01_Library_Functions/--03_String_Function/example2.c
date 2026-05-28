# 📄 02_strcpy.c

```c id="4x6kt9"
/*
===========================================
Question:
Write a C program to copy
one string into another using strcpy().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100],str2[100];

    printf("Enter String: ");
    gets(str1);

    strcpy(str2,str1);

    printf("Copied String = %s", str2);
}

/*
--------------- OUTPUT ----------------

Enter String: Hello
Copied String = Hello

---------------------------------------
*/
```
