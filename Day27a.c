/* Write a program to print the following pattern:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5; // Number of rows for the top half (including the center)

    // --- Print the top half (including the middle row) ---
    // i = 1 (1 star), 2 (3 stars), ..., 5 (9 stars)
    for (i = 1; i <= n; i++) {
        
        // Print leading spaces
        // Spaces = 4, 3, 2, 1, 0
        for (j = 1; j <= (n - i); j++) {
            printf(" ");
        }
        
        // Print stars
        // Stars = 1, 3, 5, 7, 9
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }

    // --- Print the bottom half (excluding the middle row) ---
    // i = 4 (7 stars), 3 (5 stars), ..., 1 (1 star)
    for (i = n - 1; i >= 1; i--) {
        
        // Print leading spaces
        // Spaces = 1, 2, 3, 4
        for (j = 1; j <= (n - i); j++) {
            printf(" ");
        }
        
        // Print stars
        // Stars = 7, 5, 3, 1
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}