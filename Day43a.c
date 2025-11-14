/* Write a program to reverse a string. */
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int start, end;
    char temp;

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // --- 1. Find the length of the string ---
    // Loop until we find the null terminator ('\0')
    while (str[length] != '\0') {
        length++;
    }

    // fgets() includes the newline character ('\n')
    // Exclude it from the reversal process by replacing it
    // with a null terminator (or just decrementing length)
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; // Remove the newline
        length--;               // Decrement the length
    }

    // --- 2. Reverse the string in-place ---
    start = 0;     // Index of the first character
    end = length - 1; // Index of the last character

    // Loop until the two pointers meet or cross
    while (start < end) {
        
        // Swap the characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        // Move the pointers towards the center
        start++;
        end--;
    }

    // --- 3. Print the reversed string ---
    printf("Reversed string: %s\n", str);

    return 0;
}