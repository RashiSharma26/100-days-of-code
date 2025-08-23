/* Write a program to count characters in a string without using built-in length functions. */
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    // We use fgets to safely read a whole line
    fgets(str, sizeof(str), stdin);

    // Loop until we find the null terminator ('\0')
    // 'length' acts as both the index and the counter
    while (str[length] != '\0') {
        length++;
    }

    // fgets() includes the newline character ('\n') at the end
    // if the user pressed Enter and there was space in the buffer.
    // We need to check for this and exclude it from the count.
    
    // If length > 0 (string is not empty) 
    // AND the last character *before* the '\0' (at index length-1) is a newline
    if (length > 0 && str[length - 1] == '\n') {
        
        // Decrement the length to not count the newline
        length--;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}