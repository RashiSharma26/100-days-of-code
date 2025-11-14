/* Write a program to find the sum of each row of a matrix and store it in an array. */
#include <stdio.h>

int main() {
    int r, c, i, j;
    int matrix[100][100];
    long long row_sums[100] = {0}; // Array to store sum of each row

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

    // 3. Print the matrix (for verification)
    printf("\nThe matrix you entered is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 4. Calculate the sum of each row
    for (i = 0; i < r; i++) {
        // We calculate the sum for the row 'i'
        long long current_row_sum = 0;
        
        // Loop through all columns (j) in the current row (i)
        for (j = 0; j < c; j++) {
            current_row_sum += matrix[i][j];
        }
        
        // Store the calculated sum in the row_sums array
        row_sums[i] = current_row_sum;
    }

    // 5. Print the sum of each row
    printf("\nSum of each row:\n");
    for (i = 0; i < r; i++) {
        printf("Sum of Row %d: %lld\n", i + 1, row_sums[i]);
    }

    return 0;
}