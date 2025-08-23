/* Write a program to check if a matrix is symmetric. */
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];
    int isSymmetric = 1; // Flag, 1 = True (Symmetric), 0 = False (Not)

    // 1. Read the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // --- 2. Check if the matrix is square ---
    if (r != c) {
        isSymmetric = 0; // Not square, so cannot be symmetric
        printf("\nMatrix is not square, so it cannot be symmetric.\n");
    }

    if (r > 100 || r <= 0 || c > 100 || c <= 0) {
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

    // --- 4. Check for symmetry (only if it's square) ---
    if (isSymmetric == 1) {
        
        // We only need to check the upper triangle (or lower)
        // We loop i from 0 to r-1
        // We loop j from i+1 to c-1 (j starts *after* the diagonal)
        for (i = 0; i < r; i++) {
            for (j = i + 1; j < c; j++) {
                
                // Compare element (i, j) with (j, i)
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0; // Found a mismatch
                    break; // Exit the inner loop
                }
            }
            if (isSymmetric == 0) {
                break; // Exit the outer loop as well
            }
        }
    }

    // 5. Print the result
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    if (isSymmetric == 1) {
        printf("\nThe matrix is symmetric. (True)\n");
    } else {
        printf("\nThe matrix is not symmetric. (False)\n");
    }

    return 0;
}