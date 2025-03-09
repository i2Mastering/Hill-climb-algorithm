// Ike Iloegbu CSC6033 Project 1
// C++ Program to Compute the Dot Product of Two Matrices

#include <iostream>
using namespace std;

/**
 * Computes and prints the dot product of two matrices if valid.
 *
 * @param mat1 Pointer to the first matrix.
 * @param mat2 Pointer to the second matrix.
 * @param r1 Number of rows in the first matrix.
 * @param c1 Number of columns in the first matrix.
 * @param r2 Number of rows in the second matrix.
 * @param c2 Number of columns in the second matrix.
 */
void printProduct(int** mat1, int** mat2, int r1, int c1, int r2, int c2) {
    // Validate matrix dimensions for multiplication
    if (c1 != r2) {
        cout << "Impossible: The number of columns in the first matrix is "
             << c1 << " and the number of rows in the second matrix is "
             << r2 << endl;
        return;
    }

    // Initialize result matrix
    int** rslt = new int*[r1];
    for (int i = 0; i < r1; i++) {
        rslt[i] = new int[c2];
    }

    cout << "The dot product of the given two matrices is:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            rslt[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
            cout << rslt[i][j] << "\t";
        }
        cout << endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < r1; i++) {
        delete[] rslt[i];
    }
    delete[] rslt;
}

/**
 * Main function that initializes matrices and calls the matrix multiplication function.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    int r1 = 1, c1 = 2;
    int r2 = 2, c2 = 1;

    // Dynamically allocate memory for first matrix
    int** mat1 = new int*[r1];
    for (int i = 0; i < r1; i++) {
        mat1[i] = new int[c1];
    }
    mat1[0][0] = 3;
    mat1[0][1] = 8;

    // Dynamically allocate memory for second matrix
    int** mat2 = new int*[r2];
    for (int i = 0; i < r2; i++) {
        mat2[i] = new int[c2];
    }
    mat2[0][0] = 11;
    mat2[1][0] = 22;

    // Perform matrix multiplication
    printProduct(mat1, mat2, r1, c1, r2, c2);

    // Free dynamically allocated memory
    for (int i = 0; i < r1; i++) {
        delete[] mat1[i];
    }
    delete[] mat1;

    for (int i = 0; i < r2; i++) {
        delete[] mat2[i];
    }
    delete[] mat2;

    return 0;
}
