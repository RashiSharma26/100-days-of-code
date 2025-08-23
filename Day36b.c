/* Write a program to find the sum of all elements in a matrix. */
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];
    long long sum = 0; // Use long long in case the sum is very large

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

    // 3. Calculate the sum of all elements
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum += matrix[i][j];
        }
    }

    // 4. Print the matrix (optional, for verification)
    printf("\nThe matrix you entered is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 5. Print the sum
    printf("\nThe sum of all elements in the matrix is: %lld\n", sum);

    return 0;
}