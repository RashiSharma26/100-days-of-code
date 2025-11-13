/* Write a program to print the following pattern:
*****
*****
*****
*****
*****
*/
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
    int cols = 5;

    // Outer loop to handle number of rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop to handle number of columns
        for (j = 1; j <= cols; j++) {
            printf("*");
        }
        
        // Print a newline after each row is complete
        printf("\n");
    }

    return 0;
}