# 📄 07_formatted_output.c

```c id="ec5v51"
/*
===========================================
Question:
Write a C program to display
formatted output using printf().
===========================================
*/

#include<stdio.h>

void main()
{
    int age = 20;
    float marks = 88.50;
    char grade = 'A';

    printf("Age = %d\n", age);
    printf("Marks = %.2f\n", marks);
    printf("Grade = %c", grade);
}
```
