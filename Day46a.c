/* Write a program to remove all vowels from a string. */
#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char str[100];
    char temp_str[100]; // To store the result without vowels
    int i = 0;
    int j = 0; // Index for the temp_str

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // Loop until we find the null terminator ('\0')
    while (str[i] != '\0') {
        char ch = str[i];
        
        // Convert to lowercase to simplify vowel check
        char lower_ch = tolower(ch);

        // Check if the character is NOT a vowel
        if (lower_ch != 'a' && lower_ch != 'e' && lower_ch != 'i' &&
            lower_ch != 'o' && lower_ch != 'u') {
            
            // If it's not a vowel, copy it to the temp string
            temp_str[j] = str[i];
            j++; // Move to the next position in the temp string
        }
        
        i++; // Move to the next character in the original string
    }

    // Add the null terminator to the end of the temp string
    temp_str[j] = '\0';

    printf("String after removing vowels: %s\n", temp_str);

    return 0;
}