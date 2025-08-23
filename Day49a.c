/* Write a program to print the initials of a name. */
#include <stdio.h>
#include <ctype.h> // For toupper()

int main() {
    char str[100];
    int i = 0;

    printf("Enter a full name: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // --- 1. Print the first initial ---
    // The first character (if it's not a space) is always an initial
    if (str[0] != ' ' && str[0] != '\n' && str[0] != '\0') {
        printf("%c", toupper(str[0]));
    }

    // --- 2. Loop through the rest of the string ---
    // Look for characters that follow a space
    while (str[i] != '\0') {
        
        // If the current character is a space...
        if (str[i] == ' ') {
            
            // ...and the *next* character is not a space or null...
            // (this handles multiple spaces between names)
            if (str[i+1] != ' ' && str[i+1] != '\n' && str[i+1] != '\0') {
                
                // ...then the next character is an initial
                printf("%c", toupper(str[i+1]));
            }
        }
        
        i++; // Move to the next character
    }
    
    printf("\n");

    return 0;
}