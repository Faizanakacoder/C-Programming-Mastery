s# 📄 07_palindrome_string.c

```c id="dr9jft"
/*
===========================================
Question:
Write a C program to check
whether string is palindrome or not.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100],rev[100];
    int i,len;

    printf("Enter String: ");
    gets(str);

    len = strlen(str);

    for(i=0;i<len;i++)
    {
        rev[i] = str[len-1-i];
    }

    rev[i] = '\0';

    if(strcmp(str,rev)==0)
        printf("Palindrome String");
    else
        printf("Not Palindrome");
}

/*
--------------- OUTPUT ----------------

Enter String: madam
Palindrome String

---------------------------------------
*/
```
