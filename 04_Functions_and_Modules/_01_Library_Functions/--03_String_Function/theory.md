# 📘 Theory of String Functions

---

# 📌 What are String Functions?

String functions are predefined functions used to manipulate strings.

These functions are available in string.h library.

---

# 📌 Header File

```c
#include<string.h>
```

---

# 📌 strlen() Function

Used to calculate string length.

Example:

```c
strlen(str);
```

---

# 📌 strcpy() Function

Used to copy one string into another.

Example:

```c
strcpy(str2,str1);
```

---

# 📌 strcat() Function

Used to join two strings.

Example:

```c
strcat(str1,str2);
```

---

# 📌 strcmp() Function

Used to compare two strings.

Example:

```c
strcmp(str1,str2);
```

---

# 🔍 Dry Run Example

```c
#include<stdio.h>
#include<string.h>

void main()
{
    char str[] = "Hello";

    printf("%d", strlen(str));
}
```

---

# 📌 Step-by-Step Execution

| Step | Execution |
|------|-----------|
| 1 | Program starts |
| 2 | String stored |
| 3 | strlen() counts characters |
| 4 | Length becomes 5 |
| 5 | Output displayed |
| 6 | Program ends |

---

# 📌 Advantages

✅ Easy string handling  
✅ Faster operations  
✅ Less coding effort  
✅ Improves readability  

---

# 📌 Important Points

✅ strlen() → length  
✅ strcpy() → copy string  
✅ strcat() → join string  
✅ strcmp() → compare strings  

---

# 🎯 Conclusion

String functions simplify string operations and improve programming efficiency.