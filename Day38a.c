/* Write a program to add two matrices. */
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;
    int matrix1[100][100], matrix2[100][100], sum[100][100];

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

    // --- Check if addition is possible ---
    if (r1 != r2 || c1 != c2) {
        printf("\nError: Matrices cannot be added.\n");
        printf("Dimensions must be the same (e.g., 2x3 and 2x3).\n");
        return 1;
    }

    printf("\nEnter elements for the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter element matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // --- Calculate the sum ---
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // --- Print the result ---
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}