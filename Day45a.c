/* Write a program to count the frequency of a given character in a string. */
#include <stdio.h>

int main() {
    char str[100];
    char key_char;
    int i = 0;
    int count = 0;

    // --- 1. Read the string ---
    printf("Enter a string: ");
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // --- 2. Read the character to search for ---
    printf("Enter the character to find the frequency of: ");
    scanf("%c", &key_char);

    // --- 3. Loop through the string and count ---
    // Loop until we find the null terminator ('\0')
    while (str[i] != '\0') {
        
        // Check if the current character matches the key
        if (str[i] == key_char) {
            count++;
        }
        
        i++; // Move to the next character
    }

    // --- 4. Print the result ---
    printf("The character '%c' appears %d time(s) in the string.\n", key_char, count);

    return 0;
}