# 📄 09_uppercase_conversion.c

```c id="1ny6gd"
/*
===========================================
Question:
Write a C program to convert
string into uppercase.
===========================================
*/

#include<stdio.h>
#include<ctype.h>

void main()
{
    char str[100];
    int i;

    printf("Enter String: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase String = %s", str);
}

/*
--------------- OUTPUT ----------------

Enter String: hello
Uppercase String = HELLO

---------------------------------------
*/
```
