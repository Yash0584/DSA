# 📂 DSA / Array / Array2

This directory contains C++ programs related to **Array** and **Vector** operations, as part of a Data Structures & Algorithms (DSA) practice set. The files demonstrate basic concepts like:

* Dynamic arrays (using `std::vector`)
* Passing arrays and vectors to functions
* Common vector operations (`push_back`, `pop_back`, `capacity`)
* Iterating and searching
* Pointer arithmetic with arrays
* Time complexity considerations of these basic operations

---

## 📜 Contents

| Filename               | Description                                                                                |
| ---------------------- | ------------------------------------------------------------------------------------------ |
| `capacity.cpp`         | Demonstrates vector size vs capacity and dynamic resizing behavior.                        |
| `lastindex.cpp`        | Finds the last occurrence of a specified element (`x`) in a vector.                        |
| `operationsvector.cpp` | Shows common vector operations like `push_back()` and `pop_back()`.                        |
| `passingArray.cpp`     | Demonstrates how arrays are passed to functions and modified (pass-by-reference behavior). |
| `pointerArray.cpp`     | Illustrates pointer arithmetic with arrays (`ptr++`, `ptr--`).                             |
| `twosum.cpp`           | Solves the two-sum problem: Given an array, find all pairs that sum to `x`.                |
| `vectorAtSort.cpp`     | Demonstrates using `at()` for element access and sorting vectors.                          |
| `vectorbasic.cpp`      | Shows vector initialization, size vs capacity as we insert elements.                       |
| `vectorinput.cpp`      | Reads input into a vector and outputs the elements.                                        |
| `vectortofunction.cpp` | Passes a vector to a function (by value and by reference) and modifies its contents.       |

---

## ⚙️ How to Run

Each file is a standalone C++ program. To compile and run any file:

```bash
g++ filename.cpp -o filename
./filename
```

For example:

```bash
g++ twosum.cpp -o twosum
./twosum
```

---

## 💡 Key Learning Points

✅ Differences between `size()` and `capacity()` in vectors.
✅ Efficiently passing arrays and vectors to functions.
✅ Iterating over arrays and vectors with both `[]` and `at()`.
✅ How vector capacity doubles upon reaching its limit.
✅ Finding elements efficiently and analyzing time complexity.

---

💬 **Happy Coding!** Let me know if you’d also like a short summary of each algorithm's time complexity or a deeper dive into any particular file. 🎯
