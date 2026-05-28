# 📄 04_strcmp.c

```c id="0jzaxv"
/*
===========================================
Question:
Write a C program to compare
two strings using strcmp().
===========================================
*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100],str2[100];

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    if(strcmp(str1,str2)==0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
}

/*
--------------- OUTPUT ----------------

Enter First String: Hello
Enter Second String: Hello
Strings are Equal

---------------------------------------
*/
```
