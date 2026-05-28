# 📘 Single File Module - Syntax Guide

---

## 🚀 Basic Structure of Single File Program

void main()
{
    // variable declaration
    // logic implementation
    // output statement
}

---

## 📌 Program with Input and Output

#include<stdio.h>

void main()
{
    int a;

    printf("Enter value: ");
    scanf("%d", &a);

    printf("Value = %d", a);
}

---

## 📌 Arithmetic Operation Syntax

#include<stdio.h>

void main()
{
    int a = 10, b = 20;

    printf("Sum = %d", a + b);
}

---

## 📌 Conditional Statement Syntax

#include<stdio.h>

void main()
{
    int a = 10;

    if(a > 5)
    {
        printf("Greater");
    }
}

---

## 📌 Loop Syntax (For Loop)

#include<stdio.h>

void main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
}

---

## 📌 While Loop Syntax

#include<stdio.h>

void main()
{
    int i = 1;

    while(i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
}

---

## 📌 Function in Single File Module

#include<stdio.h>

void display()
{
    printf("Hello World");
}

void main()
{
    display();
}

---

## 📌 Important Rules

- Only one `.c` file is used
- Execution starts from main()
- No external file dependency
- Functions must be defined before or declared before use
- Keep program simple and readable

---

## 📌 Key Takeaways

✔ Simple structure  
✔ Beginner friendly  
✔ Used for learning logic  
✔ Foundation for modular programming  
✔ Not suitable for large systems  