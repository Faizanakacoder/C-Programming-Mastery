# Goto Statement in C

<div align="center">

## ⏩ Unconditional Jump Using Goto Statement

**Topic:** Jump Statements  
**Category:** Control Statements  
**Level:** Beginner to Intermediate

</div>

---

# 📖 Introduction

The **goto statement** in C is used to:

```txt
Transfer program control from one part of the program to another
```

It is an:

```txt
Unconditional jump statement
```

---

# 🧠 Why Use Goto Statement?

It is used in:

- Exiting nested loops
- Error handling
- Jumping to cleanup section
- Breaking complex flow

---

# ⚠ Important Note

```txt
Goto should be used carefully
```

Because it can make code:

```txt
Hard to read and debug
```

---

# 🏗 Syntax

```c
goto label;

label:
statement;
```

---

# ⚙ Working

When goto executes:

```txt
Program jumps directly to label
```

Skipping all intermediate code.

---

# 🔄 Flow

```txt
Start Program
     ↓
Condition Check
     ↓
goto label
     ↓
Jump to label
     ↓
Execute statements
```

---

# 🌍 Real Life Example

```txt
Exit from deeply nested loops
Error handling in programs
Skipping unwanted sections
```

---

# 🏁 Conclusion

Goto statement provides direct control transfer but should be used only when necessary.