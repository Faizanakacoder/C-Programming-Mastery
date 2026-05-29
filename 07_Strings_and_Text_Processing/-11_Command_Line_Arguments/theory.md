# 📘 Command Line Arguments - Theory

---

# 📌 What are Command Line Arguments?

Command Line Arguments are values passed to the program while executing it from terminal or command prompt.

Example:

program.exe 10 20

Here:
10 and 20 are command line arguments.

---

# 📌 Main Function with Arguments

Syntax:

int main(int argc, char *argv[])

---

# 📌 argc

argc means:
Argument Count

It stores:
total number of arguments.

---

# 📌 argv

argv means:
Argument Vector

It stores:
arguments as strings.

---

# 📌 Important Point

argv[0]
contains:
program name

Actual user arguments start from:
argv[1]

---

# 📌 Internal Working

Command:

program.exe HELLO 100

Storage:

| Index | Value |
|---|---|
| argv[0] | program.exe |
| argv[1] | HELLO |
| argv[2] | 100 |

argc = 3

---

# 📌 Integer Conversion

Arguments are stored as:
strings.

To convert into integer:
atoi()

is used.

---

# 📌 Why Use Command Line Arguments?

Advantages:
- faster execution
- automation
- dynamic input
- scripting support

---

# 🌍 Real Life Analogy

Think of command line arguments like:
instructions given to a worker before starting the job.

---

# 📌 Advantages

✅ Faster input  
✅ Automation support  
✅ Useful in scripting  
✅ Professional programming approach  

---

# ❌ Disadvantages

❌ Difficult for beginners  
❌ Requires terminal knowledge  
❌ Argument validation needed  

---

# 🧪 Dry Run Example

Command:

program.exe 10 20

argc = 3

argv[0] = program.exe  
argv[1] = 10  
argv[2] = 20  

---

# 🎯 Viva Questions

1. What is argc?
2. What is argv?
3. Why argv is array of pointers?
4. What does argv[0] contain?
5. How to convert arguments into integers?

---

# 🚀 Conclusion

Command Line Arguments are very important for:
- system programming
- utility software
- automation tools
- professional applications