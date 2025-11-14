/* Write a program to find the transpose of a matrix. */
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];
    int transpose[100][100]; // To store the transposed matrix

    // 1. Read the dimensions of the matrix
    printf("Enter the number of rows (1-100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (1-100): ");
    scanf("%d", &c);

    // Validate dimensions
    if (r > 100 || r <= 0 || c > 100 || c <= 0) {
        printf("Invalid dimensions. Please enter numbers between 1 and 100.\n");
        return 1;
    }

    // 2. Read elements into the matrix
    printf("\nEnter %d elements for the matrix:\n", r * c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 4. Find the transpose
    // The key is swapping the row and column indices
    // The loop iterates through the original matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            // Element at (i, j) in original becomes (j, i) in transpose
            transpose[j][i] = matrix[i][j];
        }
    }

    // 5. Print the transposed matrix
    // Note: The loop limits are swapped (c rows, r columns)
    printf("\nTranspose of the Matrix:\n");
    for (i = 0; i < c; i++) { // Loop through the new rows (original columns)
        for (j = 0; j < r; j++) { // Loop through the new columns (original rows)
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}