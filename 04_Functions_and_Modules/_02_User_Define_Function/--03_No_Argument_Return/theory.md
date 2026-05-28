# 📖 No Argument but Return Value Function (Theory)

---

## 🧠 Definition

A **No Argument but Return Value Function** is a function that:

- Does NOT accept any input parameters
- Performs internal processing
- RETURNS a value using the `return` statement

---

## ⚙️ Working Principle

1. Function is called without arguments  
2. Function executes internal logic  
3. Processing is done inside function  
4. A value is returned to main function  
5. Returned value is stored or used  

---

## 🔄 Execution Flow

```
main() → function call → execution → return value → main()
```

---

## 📊 Characteristics

| Feature | Description |
|--------|-------------|
| Arguments | Not used |
| Return Type | Required |
| Input | Internal only |
| Output | Returned value |

---

## 💡 Real-Life Analogy

Imagine a calculator app 📱

- You open it (no input passed)
- It already computes predefined logic
- It gives output as result

---

## 🧾 Example Concept

```c
int getValue()
{
    return 50;
}
```

👉 No input needed  
👉 Returns fixed value  

---

## ⚡ Advantages

✔ Simple structure  
✔ Easy to implement  
✔ Good for fixed logic  
✔ Improves modular programming  

---

## ❌ Disadvantages

❌ Cannot accept dynamic input  
❌ Limited flexibility  
❌ Not suitable for user-driven programs  

---

## 🎯 Important Points

✔ Must use return type (int, float, etc.)  
✔ Must use return keyword  
✔ No parameters inside function  
✔ Returned value must be stored  

---

## 🧠 Dry Run Example

```c
int fun()
{
    return 10;
}
```

### Step-by-step Execution:

- Function called → fun()
- No arguments passed
- Function executes
- Returns 10
- Value stored in variable