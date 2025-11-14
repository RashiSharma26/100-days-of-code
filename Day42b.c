/* Write a program to convert a lowercase string to uppercase without using built-in functions. */
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int char_difference = 'a' - 'A'; // Calculate the difference in ASCII values

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // Loop until we find the null terminator ('\0')
    while (str[i] != '\0') {
        
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            
            // Convert to uppercase by subtracting the ASCII difference
            str[i] = str[i] - char_difference;
        }
        
        i++; // Move to the next character
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}