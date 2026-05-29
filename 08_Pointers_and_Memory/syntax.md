# 📘 Pointers and Memory - Syntax

---

# 📌 Declare Pointer

int *p;

char *ptr;

float *fp;

---

# 📌 Store Address in Pointer

int x = 10;

int *p = &x;

---

# 📌 Access Value using Pointer

printf("%d", *p);

---

# 📌 Display Address

printf("%u", &x);

---

# 📌 Pointer to Pointer

int **ptr;

---

# 📌 Pointer Arithmetic

p++;

p--;

p + 1;

p - 1;

---

# 📌 Array with Pointer

int arr[5];

int *p = arr;

---

# 📌 Traverse Array using Pointer

for(i = 0; i < 5; i++)
{
printf("%d ", *(p + i));
}

---

# 📌 String Pointer

char *str = "HELLO";

---

# 📌 Dynamic Memory Allocation

malloc()

calloc()

realloc()

free()

---

# 📌 malloc Syntax

int *p;

p = (int*)malloc(sizeof(int));

---

# 📌 calloc Syntax

p = (int*)calloc(5, sizeof(int));

---

# 📌 realloc Syntax

p = realloc(p, new_size);

---

# 📌 free Syntax

free(p);

---

# 📌 Structure Pointer

struct student *ptr;

---

# 📌 Arrow Operator

ptr->age

---

# 📌 NULL Pointer

int *p = NULL;

---

# 📌 Important Rules

✅ Initialize pointers properly
✅ Free dynamically allocated memory
✅ Use NULL after free()
✅ Avoid wild pointers

---

# ⚠️ Common Mistakes

❌ Dereferencing NULL pointer
❌ Accessing freed memory
❌ Forgetting free()
❌ Invalid pointer arithmetic

---

# 🚀 Quick Revision

| Symbol   | Meaning              |
| -------- | -------------------- |
| &        | Address operator     |
| *        | Dereference operator |
| malloc() | Allocate memory      |
| free()   | Release memory       |

---

# 🎯 Summary

Pointers provide:

* direct memory access
* efficient programming
* dynamic memory handling
* advanced C programming capabilities
