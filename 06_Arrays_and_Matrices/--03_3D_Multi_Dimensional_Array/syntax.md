# 📘 Multi-Dimensional Array - Syntax

---

## 📌 Declaration

int arr[x][y][z];

Example:
int arr[2][2][2];

---

## 📌 Input

for(i = 0; i < x; i++)
{
    for(j = 0; j < y; j++)
    {
        for(k = 0; k < z; k++)
        {
            scanf("%d", &arr[i][j][k]);
        }
    }
}

---

## 📌 Output

for(i = 0; i < x; i++)
{
    for(j = 0; j < y; j++)
    {
        for(k = 0; k < z; k++)
        {
            printf("%d ", arr[i][j][k]);
        }
        printf("\n");
    }
    printf("\n");
}

---

## 📌 Key Rules

- 3 or more dimensions allowed
- Nested loops required
- Stored in linear memory
- Same data type only

---

## 🚀 Summary

Multi-dimensional arrays = **arrays inside arrays inside arrays**