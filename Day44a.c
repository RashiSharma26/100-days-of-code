/* Write a program to count spaces, digits, and special characters in a string. */
#include <stdio.h>
#include <ctype.h> // For isdigit() and isalpha()

int main() {
    char str[100];
    int i = 0;
    int space_count = 0;
    int digit_count = 0;
    int special_count = 0;
    int alphabet_count = 0; // To help isolate special chars

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // Loop until we find the null terminator ('\0')
    while (str[i] != '\0') {
        char ch = str[i];

        // 1. Check for alphabets
        if (isalpha(ch)) {
            alphabet_count++;
        }
        // 2. Check for digits
        else if (isdigit(ch)) {
            digit_count++;
        }
        // 3. Check for spaces
        else if (ch == ' ') {
            space_count++;
        }
        // 4. Handle special characters
        // We ignore the null terminator and the newline from fgets()
        else if (ch != '\0' && ch != '\n') {
            special_count++;
        }
        
        i++; // Move to the next character
    }

    printf("\nTotal spaces: %d\n", space_count);
    printf("Total digits: %d\n", digit_count);
    printf("Total special characters: %d\n", special_count);

    return 0;
}