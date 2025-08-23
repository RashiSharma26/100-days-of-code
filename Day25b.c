/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5; // Define the total number of rows
    int rows = 5;

    // Outer loop for handling rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop for printing leading spaces
        // Row 1 needs 0 spaces (j=1; j<1)
        // Row 2 needs 1 space (j=1; j<2)
        // Row 3 needs 2 spaces (j=1; j<3)
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        
        // Inner loop for printing stars
        // Row 1 needs 5 stars (k=1; k<=5)
        // Row 2 needs 4 stars (k=1; k<=4)
        // Row 3 needs 3 stars (k=1; k<=3)
        // The number of stars is (rows - i + 1)
        for (k = 1; k <= (rows - i + 1); k++) {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}