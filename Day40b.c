/* Write a program to multiply two matrices. */
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int matrix1[100][100], matrix2[100][100], result[100][100];

    // --- Input for First Matrix ---
    printf("Enter the number of rows for the first matrix (1-100): ");
    scanf("%d", &r1);
    printf("Enter the number of columns for the first matrix (1-100): ");
    scanf("%d", &c1);

    if (r1 > 100 || r1 <= 0 || c1 > 100 || c1 <= 0) {
        printf("Invalid dimensions for the first matrix.\n");
        return 1;
    }

    printf("\nEnter elements for the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter element matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // --- Input for Second Matrix ---
    printf("\nEnter the number of rows for the second matrix (1-100): ");
    scanf("%d", &r2);
    printf("Enter the number of columns for the second matrix (1-100): ");
    scanf("%d", &c2);

    if (r2 > 100 || r2 <= 0 || c2 > 100 || c2 <= 0) {
        printf("Invalid dimensions for the second matrix.\n");
        return 1;
    }

    // --- Check if multiplication is possible ---
    // Columns of the first matrix (c1) must equal rows of the second (r2)
    if (c1 != r2) {
        printf("\nError: Matrices cannot be multiplied.\n");
        printf("The number of columns in the first matrix (%d) must equal the number of rows in the second matrix (%d).\n", c1, r2);
        return 1;
    }

    printf("\nEnter elements for the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // --- Perform Multiplication ---
    // The result matrix will have r1 rows and c2 columns

    // Loop for each row of the result matrix
    for (i = 0; i < r1; i++) {
        
        // Loop for each column of the result matrix
        for (j = 0; j < c2; j++) {
            
            // Initialize the current result cell to 0
            result[i][j] = 0;
            
            // Dot Product Loop:
            // k loops through columns of matrix1 AND rows of matrix2
            for (k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // --- Print the Resultant Matrix ---
    printf("\nResult of Matrix Multiplication (Dimensions %d x %d):\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}