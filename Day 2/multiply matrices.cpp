#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the first matrix
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;

    // Input dimensions of the second matrix
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;

    // Check if matrices can be multiplied
    if (cols1 != rows2) {
        cout << "Error: Matrices cannot be multiplied, incompatible dimensions." << endl;
        return 1;
    }

    // Declare matrices
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result[rows1][cols2];

    // Input elements of the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize the result matrix with 0
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
