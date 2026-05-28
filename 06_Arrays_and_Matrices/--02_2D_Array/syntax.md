# 📘 2D Array - Syntax

---

## 📌 Declaration

int arr[rows][columns];

Example:
int arr[2][3];

---

## 📌 Input

for(i = 0; i < rows; i++)
{
    for(j = 0; j < cols; j++)
    {
        scanf("%d", &arr[i][j]);
    }
}

---

## 📌 Output

for(i = 0; i < rows; i++)
{
    for(j = 0; j < cols; j++)
    {
        printf("%d ", arr[i][j]);
    }
}

---

## 📌 Initialization

int arr[2][2] = {
    {1, 2},
    {3, 4}
};

---

## 📌 Key Rules

- Two indexes required
- Stored in row-major order
- Nested loops required
- Same data type only

---

## 🚀 Summary

2D arrays = **matrix representation using rows and columns**