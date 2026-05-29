# 📄 theory.md

# 📘 Declaration and Initialization of Strings - Theory

---

# 📌 What is String Declaration?

Declaration means creating a string variable.

Example:

char str[20];

This creates:

* a character array
* capable of storing 20 characters

---

# 📌 What is String Initialization?

Initialization means assigning values during declaration.

Example:

char str[] = "HELLO";

---

# 🧠 Internal Working

Compiler stores:

H E L L O \0

The null character is automatically added.

---

# 📊 Memory Representation

Example:

char name[] = "RAM";

| Address | Value |
| ------- | ----- |
| 100     | R     |
| 101     | A     |
| 102     | M     |
| 103     | \0    |

---

# 📌 Types of Initialization

## 1️⃣ Direct Initialization

char str[] = "HELLO";

---

## 2️⃣ Character-wise Initialization

char str[] = {'H','E','L','L','O','\0'};

---

## 3️⃣ Runtime Initialization

scanf("%s", str);

---

# 📌 Empty String

char str[20] = "";

This creates:

* empty string
* only contains '\0'

---

# 📌 Null Character Importance

The null character:

* terminates string
* helps compiler detect ending
* prevents garbage output

---

# 📌 String Size

Example:

char str[10];

Can store:

* 9 visible characters
* 1 null character

---

# 🌍 Real Life Analogy

Think of a string like a container:

* declaration = creating container
* initialization = filling container

---

# 📌 Advantages

✅ Easy text storage
✅ Flexible input handling
✅ Human-readable
✅ Efficient processing

---

# ❌ Disadvantages

❌ Buffer overflow risk
❌ Requires proper sizing
❌ Null character dependency

---

# 🧪 Dry Run Example

char str[] = "HI";

Stored as:

H → I → \0

---

# 🎯 Viva Questions

1. What is declaration?
2. What is initialization?
3. Difference between both?
4. Why '\0' is important?
5. What happens without '\0'?

---

# 🚀 Conclusion

Proper declaration and initialization are essential for safe and effective string handling in C.
