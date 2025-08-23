/* Write a program to print the following pattern:
5
45
345
2345
12345
*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
    int num_to_print;

    // Outer loop to handle number of rows
    for (i = 1; i <= rows; i++) {
        
        // Determine the starting number for the row
        // Row 1 starts at 5 (5-1+1)
        // Row 2 starts at 4 (5-2+1)
        // Row 3 starts at 3 (5-3+1)
        num_to_print = rows - i + 1;

        // Inner loop to handle number of columns
        // The loop runs 'i' times (1 time for row 1, 2 for row 2, etc.)
        for (j = 1; j <= i; j++) {
            
            // Print the number
            printf("%d", num_to_print);
            
            // Increment the number for the next column
            num_to_print++;
        }
        
        // Print a newline after each row is complete
        printf("\n");
    }

    return 0;
}