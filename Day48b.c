/* Write a program to reverse each word in a sentence without changing the word order. */
#include <stdio.h>
#include <string.h> // For strlen()

/**
 * @brief Swaps two characters.
 * @param a Pointer to the first character.
 * @param b Pointer to the second character.
 */
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * @brief Reverses a part of a string in place.
 * @param str The string to modify.
 * @param start The starting index of the segment to reverse.
 * @param end The ending index of the segment to reverse.
 */
void reverse(char str[], int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

int main() {
    char str[100];
    int length = 0;
    int i = 0;
    int word_start_index = 0;

    printf("Enter a sentence: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // --- 1. Find the length and remove the newline from fgets() ---
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; // Remove the newline
        length--;               // Decrement the length
    }
    
    // --- 2. Iterate through the string to reverse each word ---
    
    // We add a space at the end to help detect the last word.
    // This simplifies the loop by ensuring the last word is
    // also followed by a delimiter.
    str[length] = ' ';
    str[length + 1] = '\0';
    length++; // Include the new space in our loop

    for (i = 0; i < length; i++) {
        
        // Check if the character is a space (a word delimiter)
        if (str[i] == ' ') {
            
            // We found the end of a word.
            // The word is from 'word_start_index' to 'i - 1'.
            
            // Call the reverse function on just that segment
            reverse(str, word_start_index, i - 1);
            
            // The next word will start after this space
            word_start_index = i + 1;
        }
    }

    // --- 3. Clean up the string ---
    // Remove the extra space we added at the end
    str[length - 1] = '\0';
    
    // --- 4. Print the result ---
    printf("Sentence with reversed words: %s\n", str);

    return 0;
}