/* Write a program to print the following pattern:
*
**
***
****
*****
*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Define the number of rows

    // Outer loop to handle number of rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop to handle number of columns
        // The number of columns printed is equal to the current row number (i)
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Print a newline after each row is complete
        printf("\n");
    }

    return 0;
}