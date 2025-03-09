# Matrix Multiplication in C++

## Overview
This project implements a C++ program to compute the **dot product** of two matrices using dynamic memory allocation.

## Features
- Checks matrix dimensions to validate multiplication.
- Performs **matrix multiplication** using nested loops.
- **Dynamically allocates** memory for matrices.
- **Properly frees** allocated memory to prevent leaks.

## How It Works
1. **Define Matrices**: Matrices are dynamically allocated based on user-defined sizes.
2. **Validate Input**: Ensures that matrix multiplication is possible (i.e., the number of columns in the first matrix must equal the number of rows in the second matrix).
3. **Compute Product**: Uses nested loops to calculate the dot product of matrices.
4. **Display Output**: Prints the resulting matrix.
5. **Memory Cleanup**: Frees dynamically allocated memory.

## Installation
Ensure you have a C++ compiler installed. You can use **GCC** or **MSVC**.

## Compilation & Execution
### Using g++
```bash
g++ -o matrix_mult matrix_mult.cpp
./matrix_mult
```
### Using MSVC (Windows)
```powershell
cl matrix_mult.cpp
matrix_mult.exe
```

## Example Output
```
The dot product of the given two matrices is:
94
```

## License
This project is open-source and free to use.
