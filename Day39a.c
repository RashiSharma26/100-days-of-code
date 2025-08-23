/* Write a program to check if the elements on the diagonal of a matrix are distinct. */
#include <stdio.h>

int main() {
    int r, c, i, j, k;
    int matrix[100][100];
    int diagonal[100];
    int isDistinct = 1; // Flag, 1 = True (Distinct), 0 = False (Not)

    // 1. Read the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // --- 2. Check if the matrix is square ---
    if (r != c) {
        printf("\nError: Matrix is not square.\n");
        printf("Cannot check for a single main diagonal.\n");
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

    // --- 5. Extract the main diagonal elements ---
    printf("\nDiagonal elements: ");
    for (i = 0; i < r; i++) {
        diagonal[i] = matrix[i][i];
        printf("%d ", diagonal[i]);
    }
    printf("\n");

    // --- 6. Check for duplicates in the 'diagonal' array ---
    // We compare each element with every other element that comes after it
    for (i = 0; i < r; i++) {
        for (j = i + 1; j < r; j++) {
            
            // If a match is found
            if (diagonal[i] == diagonal[j]) {
                isDistinct = 0; // Set flag to False (Not Distinct)
                break; // Exit the inner loop
            }
        }
        if (isDistinct == 0) {
            break; // Exit the outer loop
        }
    }

    // --- 7. Print the final result ---
    if (isDistinct == 1) {
        printf("\nThe diagonal elements are distinct (True).\n");
    } else {
        printf("\nThe diagonal elements are NOT distinct (False).\n");
    }

    return 0;
}