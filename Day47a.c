/* Write a program to check if two strings are anagrams. */
#include <stdio.h>
#include <string.h> // For strlen()

int main() {
    char str1[100], str2[100];
    
    // Array to store frequency of all 256 possible ASCII characters
    int char_counts[256] = {0};
    
    int len1, len2, i;
    int isAnagram = 1; // Flag, 1 = True (Anagram), 0 = False (Not)

    // --- 1. Read the first string ---
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // --- 2. Read the second string ---
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // --- 3. Get lengths and remove newlines from fgets() ---
    len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0'; // Replace newline with null
        len1--;               // Decrement the length
    }

    len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    // --- 4. Check if lengths are equal ---
    if (len1 != len2) {
        isAnagram = 0; // If lengths differ, they can't be anagrams
    } else {
        
        // --- 5. Count characters for string 1 (Increment) ---
        for (i = 0; i < len1; i++) {
            // Use (unsigned char) to handle all ASCII values safely as indices
            char_counts[(unsigned char)str1[i]]++;
        }

        // --- 6. Count characters for string 2 (Decrement) ---
        for (i = 0; i < len2; i++) {
            char_counts[(unsigned char)str2[i]]--;
        }

        // --- 7. Check the frequency array ---
        // If the strings are anagrams, all counts in the array will be 0.
        for (i = 0; i < 256; i++) {
            if (char_counts[i] != 0) {
                // Found a character with a non-zero count
                isAnagram = 0; // Not anagrams
                break; // Stop checking
            }
        }
    }

    // --- 8. Print the final result ---
    if (isAnagram == 1) {
        printf("\nResult: The strings \"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\nResult: The strings \"%s\" and \"%s\" are NOT anagrams.\n", str1, str2);
    }

    return 0;
}