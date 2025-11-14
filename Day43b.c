/* Write a program to check if a string is a palindrome. */
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int start, end;
    int isPalindrome = 1; // Flag, 1 = True (Palindrome), 0 = False (Not)

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // --- 1. Find the length of the string ---
    // Loop until we find the null terminator ('\0')
    while (str[length] != '\0') {
        length++;
    }

    // fgets() includes the newline character ('\n')
    // Exclude it from the check by replacing it
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; // Remove the newline
        length--;               // Decrement the length
    }

    // --- 2. Check for palindrome ---
    start = 0;      // Index of the first character
    end = length - 1; // Index of the last character

    // Loop until the two pointers meet or cross
    while (start < end) {
        
        // Compare the characters at start and end
        if (str[start] != str[end]) {
            isPalindrome = 0; // Not a palindrome
            break;            // Stop checking
        }
        
        // Move the pointers towards the center
        start++;
        end--;
    }

    // --- 3. Print the result ---
    if (isPalindrome == 1) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}