/* Write a program to replace spaces with hyphens in a string. */
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // Loop until we find the null terminator ('\0')
    while (str[i] != '\0') {
        
        // Check if the current character is a space
        if (str[i] == ' ') {
            
            // Replace the space with a hyphen
            str[i] = '-';
        }
        
        i++; // Move to the next character
    }

    // fgets() includes the newline ('\n') which we might not want.
    // The replacement loop will not affect it, so the string will
    // still print with a newline. This is usually fine.
    
    printf("String with spaces replaced: %s\n", str);

    return 0;
}