# 📘 Command Line Arguments - Syntax

---

# 📌 Main Function Syntax

int main(int argc, char *argv[])

---

# 📌 Access Arguments

argv[0]
argv[1]
argv[2]

---

# 📌 Display Arguments

printf("%s", argv[i]);

---

# 📌 Convert String to Integer

atoi(argv[1]);

---

# 📌 Loop Through Arguments

for(i = 0; i < argc; i++)
{
    printf("%s", argv[i]);
}

---

# 📌 Check Argument Count

if(argc < 3)
{
    printf("Insufficient Arguments");
}

---

# 📌 Include Required Header Files

#include<stdio.h>
#include<stdlib.h>

---

# 📌 Important Rules

✅ argv stores strings  
✅ argv[0] contains program name  
✅ Use atoi() for integers  
✅ Check argc before access  

---

# ⚠️ Common Mistakes

❌ Accessing invalid argv index  
❌ Forgetting type conversion  
❌ Missing argument validation  
❌ Using integer directly without atoi()  

---

# 🚀 Quick Revision

| Term | Meaning |
|---|---|
| argc | Number of arguments |
| argv | Array of strings |
| argv[0] | Program name |

---

# 🎯 Summary

Command line arguments allow:
- external input
- automation
- dynamic execution
- professional software development