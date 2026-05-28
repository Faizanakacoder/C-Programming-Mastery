# 📄 08_count_vowels.c

```c id="f2sjp6"
/*
===========================================
Question:
Write a C program to count
vowels in a string.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];
    int i,vowels=0;

    printf("Enter String: ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vowels++;
        }
    }

    printf("Total Vowels = %d", vowels);
}

/*
--------------- OUTPUT ----------------

Enter String: Hello
Total Vowels = 2

---------------------------------------
*/
```
