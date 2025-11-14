/* Write a program to count vowels and consonants in a string. */
#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char str[100];
    int i = 0;
    int vowel_count = 0;
    int consonant_count = 0;

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // Loop until we find the null terminator ('\0')
    while (str[i] != '\0') {
        char ch = str[i];

        // Check if the character is an alphabet
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            
            // Convert to lowercase to simplify vowel check
            char lower_ch = tolower(ch);

            // Check if it's a vowel
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' ||
                lower_ch == 'o' || lower_ch == 'u') {
                vowel_count++;
            } 
            // If it's an alphabet but not a vowel, it's a consonant
            else {
                consonant_count++;
            }
        }
        
        i++; // Move to the next character
    }

    printf("Total vowels: %d\n", vowel_count);
    printf("Total consonants: %d\n", consonant_count);

    return 0;
}