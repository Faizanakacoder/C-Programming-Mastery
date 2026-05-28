# 📄 03_strcat.c

```c id="h5tzr2"
/*
===========================================
Question:
Write a C program to join
two strings using strcat().
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

    strcat(str1,str2);

    printf("Joined String = %s", str1);
}

/*
--------------- OUTPUT ----------------

Enter First String: Hello
Enter Second String: World
Joined String = HelloWorld

---------------------------------------
*/
```
