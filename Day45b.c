/* Write a program to toggle the case of each character in a string. */
#include <stdio.h>
#include <ctype.h> // For isupper(), islower(), toupper(), tolower()

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // Loop until we find the null terminator ('\0')
    while (str[i] != '\0') {
        char ch = str[i];

        // 1. Check if it's an uppercase letter
        if (isupper(ch)) {
            // If yes, convert it to lowercase
            str[i] = tolower(ch);
        }
        // 2. Check if it's a lowercase letter
        else if (islower(ch)) {
            // If yes, convert it to uppercase
            str[i] = toupper(ch);
        }
        
        // If it's not a letter (e.g., space, digit, symbol),
        // it's left unchanged.
        
        i++; // Move to the next character
    }

    printf("Toggled case string: %s\n", str);

    return 0;
}