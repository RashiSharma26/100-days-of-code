/* Write a program to print the following pattern:
1
12
123
1234
12345
*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Define the number of rows

    // Outer loop to handle number of rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop to handle number of columns
        // The loop runs from 1 up to the current row number (i)
        for (j = 1; j <= i; j++) {
            
            // Print the inner loop counter 'j'
            printf("%d", j);
        }
        
        // Print a newline after each row is complete
        printf("\n");
    }

    return 0;
}