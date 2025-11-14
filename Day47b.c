/* Write a program to find the longest word in a sentence. */
#include <stdio.h>
#include <string.h> // For strlen()

int main() {
    char str[100];
    char longest_word[100]; // To store the longest word
    
    int i = 0, j = 0;
    int current_word_length = 0;
    int max_length = 0;
    int longest_word_start_index = 0;

    printf("Enter a sentence: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // --- 1. Find the length and remove the newline from fgets() ---
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; // Remove the newline
        length--;               // Decrement the length
    }
    
    // --- 2. Iterate through the string to find the longest word ---
    
    // We add a space at the end to help detect the last word
    // (This is a common trick)
    str[length] = ' ';
    str[length + 1] = '\0';
    length++;
    
    int current_word_start_index = 0;

    for (i = 0; i < length; i++) {
        char ch = str[i];
        
        // Check if the character is part of a word (not a space)
        if (ch != ' ' && ch != '\t' && ch != '\n') {
            current_word_length++;
        }
        // We hit a space, meaning the word just ended
        else {
            
            // Check if the word we just finished is the new longest
            if (current_word_length > max_length) {
                max_length = current_word_length;
                
                // Store the starting index of this new longest word
                longest_word_start_index = current_word_start_index;
            }
            
            // Reset for the next word
            current_word_length = 0;
            
            // The next word will start at the next character
            current_word_start_index = i + 1;
        }
    }

    // --- 3. Extract the longest word ---
    // Copy the longest word from the original string
    if (max_length > 0) {
        for (i = 0; i < max_length; i++) {
            longest_word[i] = str[longest_word_start_index + i];
        }
        // Add the null terminator to the end
        longest_word[max_length] = '\0';
        
        printf("\nThe longest word is: \"%s\"\n", longest_word);
        printf("Length: %d\n", max_length);
    } else {
        printf("No words found in the input.\n");
    }

    return 0;
}