# 📘 Static Module - Theory

---

## 📌 What is Static in C?

Static is a storage class in C that preserves variable values between function calls.

---

## 🧠 Types of Static Usage

### 1️⃣ Static Variable
- Retains value throughout program execution
- Initialized only once

### 2️⃣ Static Function
- Scope limited to file
- Cannot be accessed from other files

---

## ⚙️ Working of Static Variable

1. Variable is initialized only once
2. Memory remains allocated till program ends
3. Value is preserved between calls

---

## 📊 Difference: Static vs Normal Variable

| Feature | Normal Variable | Static Variable |
|--------|----------------|-----------------|
| Lifetime | Function level | Program level |
| Value retention | No | Yes |
| Initialization | Every call | Only once |

---

## 🌍 Real Life Example

- Normal variable → whiteboard (erased every time)
- Static variable → notebook (value remains saved)

---

## 📌 Advantages

✔ Memory efficiency  
✔ Value retention  
✔ Useful in counters  
✔ Improves program control  

---

## ❌ Disadvantages

❌ Memory remains occupied  
❌ Not suitable for dynamic use cases  

---

## 🧪 Dry Run Example

void fun()
{
    static int x = 0;
    x++;
    printf("%d", x);
}

Call sequence:
1st call → 1  
2nd call → 2  
3rd call → 3  

---

## 🎯 Interview Questions

- What is static variable?
- Difference between static and normal variable?
- Where is static stored in memory?
- What is static function?

---

## 🚀 Conclusion

Static storage class is used for **value persistence and memory control in C programming**.