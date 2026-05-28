# 📘 Theory: Argument with No Return Value Functions

---

## 📌 Definition

A function that:

✔ Accepts arguments (parameters)  
✔ Does NOT return any value  
✔ Uses `void` return type  

is called:

👉 Argument with No Return Value Function

---

## ⚙ Internal Working

1. Main function sends data (arguments)
2. Function receives parameters
3. Processing happens inside function
4. Output is displayed inside function
5. Control returns to main function automatically

---

## 📊 Syntax Structure

```c
void function_name(data_type parameter1, data_type parameter2)
{
    // statements
}
```

---

## 🔁 Execution Flow

```
main() → function call → arguments pass → function execution → output → return to main
```

---

## 📌 Advantages

- Easy to understand
- Reduces code complexity
- Improves modularity
- Useful for printing results directly

---

## ❌ Disadvantages

- Cannot return processed values
- Less flexible for reuse
- Not suitable for mathematical result storage

---

## 📌 Real Life Analogy

📞 Calling a shop and asking price:

- You give item name (argument)
- Shop tells price (prints output)
- You don’t receive value back in program form

---

## 🧠 Important Concepts

| Concept | Description |
|--------|-------------|
| Arguments | Input values passed to function |
| void | No return value |
| Parameters | Variables in function definition |

---

## 🧪 Dry Run Example

```c
void add(int a, int b)
{
    printf("%d", a + b);
}
```

### Input:
a = 10, b = 20

### Execution:
- Function receives a and b
- Calculates sum = 30
- Prints 30
- Returns to main

---

## 🎯 Viva Questions

1. What is argument with no return function?
2. Why do we use void functions?
3. Can void functions return value?
4. Difference between return and non-return functions?
5. Where is this used in real life?

---

## 🏁 Conclusion

This function type is useful when output is directly displayed and no value is required to be returned to the calling function.