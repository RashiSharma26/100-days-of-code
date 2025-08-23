/* Write a program to perform diagonal traversal of a matrix. */
#include <stdio.h>

int main() {
    int r, c, i, j, k;
    int matrix[100][100];

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

    // --- 4. Diagonal Traversal (Type \) ---
    printf("\nDiagonal Traversal (Type \\):\n");

    // Part 1: Start from the first column (bottom-up)
    // k = starting row index
    for (k = r - 1; k >= 0; k--) {
        int row = k;
        int col = 0;
        printf("Diagonal: ");
        
        // Print the diagonal
        while (row < r && col < c) {
            printf("%d ", matrix[row][col]);
            row++;
            col++;
        }
        printf("\n");
    }

    // Part 2: Start from the first row (left-to-right, skipping [0][0])
    // k = starting column index
    for (k = 1; k < c; k++) {
        int row = 0;
        int col = k;
        printf("Diagonal: ");
        
        // Print the diagonal
        while (row < r && col < c) {
            printf("%d ", matrix[row][col]);
            row++;
            col++;
        }
        printf("\n");
    }
        
    return 0;
}