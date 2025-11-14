/* Write a program to print all sub-strings of a string. */
#include <stdio.h>
#include <string.h> // For strlen()

int main() {
    char str[100];
    int length = 0;
    int i, j, k;

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // --- 1. Find the length and remove the newline from fgets() ---
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; // Remove the newline
        length--;               // Decrement the length
    }

    printf("\nAll substrings of \"%s\" are:\n", str);

    // --- 2. Generate all substrings ---

    // Outer loop (i) selects the starting index
    for (i = 0; i < length; i++) {
        
        // Middle loop (j) selects the ending index
        // j must start from i and go up to the end
        for (j = i; j < length; j++) {
            
            // Inner loop (k) prints the substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            
            // Print a newline after each substring
            printf("\n");
        }
    }

    return 0;
}