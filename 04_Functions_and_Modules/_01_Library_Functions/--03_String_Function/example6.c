# 📄 06_reverse_string.c

```c id="8y7z6n"
/*
===========================================
Question:
Write a C program to reverse
a string.
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[100];
    int i,len;

    printf("Enter String: ");
    gets(str);

    len = strlen(str);

    printf("Reverse String = ");

    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}

/*
--------------- OUTPUT ----------------

Enter String: Hello
Reverse String = olleH

---------------------------------------
*/
```
