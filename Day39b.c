/* Write a program to find the sum of main diagonal elements for a square matrix. */
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];
    long long diagonal_sum = 0; // Use long long for the sum

    // 1. Read the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // --- 2. Check if the matrix is square ---
    if (r != c) {
        printf("\nError: Matrix is not square.\n");
        printf("Cannot calculate the main diagonal sum.\n");
        return 1;
    }
    
    // Validate dimensions
    if (r > 100 || r <= 0) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    // 3. Read elements into the matrix
    printf("\nEnter %d elements for the matrix:\n", r * c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 4. Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // --- 5. Calculate the sum of the main diagonal ---
    // The main diagonal consists of elements where row == col
    // i.e., matrix[0][0], matrix[1][1], matrix[2][2], ...
    for (i = 0; i < r; i++) {
        diagonal_sum += matrix[i][i];
    }

    // --- 6. Print the final result ---
    printf("\nThe sum of the main diagonal elements is: %lld\n", diagonal_sum);

    return 0;
}