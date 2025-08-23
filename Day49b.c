/* Write a program to print initials of a name with the surname displayed in full. */
#include <stdio.h>
#include <ctype.h> // For toupper()
#include <string.h> // For strlen()

int main() {
    char str[100];
    int i = 0;
    int length = 0;
    int last_space_index = -1; // -1 means no space found yet

    printf("Enter a full name: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // --- 1. Find the length and remove the newline from fgets() ---
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; // Remove the newline
        length--;               // Decrement the length
    }

    // --- 2. Find the index of the *last* space ---
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            last_space_index = i;
            break; // Found the last space, stop searching
        }
    }

    // --- 3. Handle based on whether a space was found ---

    if (last_space_index == -1) {
        // Case A: No space found (e.g., "Sandeep")
        // Print the whole name as is.
        printf("%s", str);
    } 
    else {
        // Case B: Space was found (e.g., "John F. Kennedy")
        
        // --- Print Initials ---
        
        // Print the first initial
        printf("%c. ", toupper(str[0]));
        
        // Loop from the first character up to the last space
        // to find middle names
        for (i = 1; i < last_space_index; i++) {
            
            // If we find a space, and the next char is not a space
            if (str[i] == ' ' && str[i+1] != ' ') {
                // Print the initial of the middle name
                printf("%c. ", toupper(str[i+1]));
            }
        }
        
        // --- Print Surname ---
        
        // Loop from the character *after* the last space to the end
        for (i = last_space_index + 1; i < length; i++) {
            
            // Capitalize the first letter of the surname
            if (i == last_space_index + 1) {
                 printf("%c", toupper(str[i]));
            } else {
                 printf("%c", str[i]);
            }
        }
    }
    
    printf("\n");

    return 0;
}