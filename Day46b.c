/* Write a program to find the first repeating lowercase alphabet in a string. */
#include <stdio.h>
#include <ctype.h> // For islower()

int main() {
    char str[100];
    
    // A "hash set" or "lookup table" for the 26 lowercase letters.
    // 0 = not seen, 1 = seen.
    int seen[26] = {0}; 
    
    int i = 0;
    char first_repeat = '\0'; // Use '\0' (null) to mean "not found"

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // Loop through the string, character by character
    while (str[i] != '\0') {
        char ch = str[i];

        // 1. Check if it's a lowercase alphabet
        if (islower(ch)) {
            
            // 2. Calculate its index (a=0, b=1, ...)
            int index = ch - 'a';
            
            // 3. Check if we have seen this character before
            if (seen[index] == 1) {
                // We found it! This is the first one that repeated.
                first_repeat = ch;
                break; // Stop searching
            } 
            // 4. If not seen, mark it as seen
            else {
                seen[index] = 1;
            }
        }
        
        i++; // Move to the next character
    }

    // --- Print the result ---
    if (first_repeat != '\0') {
        printf("The first repeating lowercase alphabet is: '%c'\n", first_repeat);
    } else {
        printf("No repeating lowercase alphabet was found.\n");
    }

    return 0;
}