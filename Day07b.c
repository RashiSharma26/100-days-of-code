/* Write a program to input a character and check whether it is a vowel or consonant using if-else. */

#include <stdio.h>
#include <ctype.h> // We use this library for the isalpha() function

int main() {
    char ch;

    printf("Enter a character: ");
    // Add a space before %c to consume any newline characters
    scanf(" %c", &ch);

    // First, check if the input is an alphabet character
    if (isalpha(ch)) {
        
        // Check if it's a vowel (lowercase or uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            
            printf("%c is a vowel.\n", ch);
        } else {
            // If it's an alphabet but not a vowel, it's a consonant
            printf("%c is a consonant.\n", ch);
        }
        
    } else {
        // If it's not an alphabet character
        printf("%c is not an alphabet character.\n", ch);
    }

    return 0;
}