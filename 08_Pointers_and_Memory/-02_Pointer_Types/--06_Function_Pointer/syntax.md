# 📘 Function Pointer Syntax

---

# 📌 Declaration

return_type (*ptr)(datatype, datatype);

---

# 📌 Example

int (*ptr)(int, int);

---

# 📌 Assign Function

ptr = add;

---

# 📌 Call Function

ptr(10, 20);

---

# 📌 Full Example

int add(int a, int b);

int (*ptr)(int, int) = add;

printf("%d", ptr(10, 20));

---

# 📌 Important Rules

✔ Parentheses are mandatory
✔ Signature must match function
