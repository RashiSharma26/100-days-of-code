/* Write a program to read and print a matrix (2D array). */
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100]; // Declare a 2D array of fixed size

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

    // 3. Print the matrix
    printf("\nThe matrix you entered is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]); // Use \t for tab spacing
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}