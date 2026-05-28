# 📘 Theory of Utility Functions

---

# 📌 What are Utility Functions?

Utility functions are predefined functions used for advanced operations like:

- Memory allocation
- Random number generation
- Data conversion
- Program termination

These functions are available in stdlib.h library.

---

# 📌 Definition

A utility function is a predefined function used to perform utility and system-related tasks.

---

# 📚 Header File

```c
#include<stdlib.h>
```

---

# 📌 rand() Function

Used to generate random numbers.

Example:

```c
rand();
```

---

# 📌 srand() Function

Used to initialize random number generator.

Example:

```c
srand(5);
```

---

# 📌 malloc() Function

Used for dynamic memory allocation.

Example:

```c
malloc(size);
```

---

# 📌 calloc() Function

Allocates multiple memory blocks.

Example:

```c
calloc(number,size);
```

---

# 📌 free() Function

Releases allocated memory.

Example:

```c
free(ptr);
```

---

# 📌 atoi() Function

Converts string into integer.

Example:

```c
atoi("123");
```

---

# 📌 atof() Function

Converts string into float.

Example:

```c
atof("12.5");
```

---

# 🔍 Dry Run Example — rand()

```c
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;

    n = rand();

    printf("%d", n);
}
```

---

# 📌 Step-by-Step Execution

| Step | Execution |
|------|-----------|
| 1 | Program starts |
| 2 | stdlib.h library included |
| 3 | rand() generates value |
| 4 | Value stored in n |
| 5 | printf displays output |
| 6 | Program ends |

---

# 📌 Advantages of Utility Functions

| Advantage | Explanation |
|-----------|-------------|
| Faster Coding | Saves time |
| Dynamic Allocation | Flexible memory handling |
| Easy Conversion | Converts data easily |
| Efficient | Simplifies programming |

---

# 📌 Important Points

✅ rand() generates random numbers  
✅ malloc() allocates memory dynamically  
✅ free() prevents memory leak  
✅ atoi() converts string to integer  
✅ atof() converts string to float  

---

# 📌 Viva Questions

## Which header file is used for utility functions?

```c
stdlib.h
```

---

## Which function allocates memory dynamically?

```c
malloc()
```

---

## Which function releases memory?

```c
free()
```

---

# 🎯 Conclusion

Utility functions are very important for advanced C programming.

They help programmers:
- manage memory
- generate random values
- convert data types
- simplify complex tasks