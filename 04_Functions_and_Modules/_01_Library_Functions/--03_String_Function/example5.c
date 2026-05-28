# 📄 05_string_input_output.c

```c id="z0v0he"
/*
===========================================
Question:
Write a C program to input
and display a string.
===========================================
*/

#include<stdio.h>

void main()
{
    char str[100];

    printf("Enter String: ");

    gets(str);

    printf("String = %s", str);
}

/*
--------------- OUTPUT ----------------

Enter String: Faizan
String = Faizan

---------------------------------------
*/
```
