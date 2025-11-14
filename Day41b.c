/* Write a program to print each character of a string on a new line. */
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    
    // Read a line of text, including spaces
    fgets(str, sizeof(str), stdin);

    // Loop until we find the null terminator ('\0')
    while (str[i] != '\0') {
        
        // fgets() includes the newline ('\n') from pressing Enter.
        // We check for it and avoid printing it, as we are
        // adding our own newlines.
        if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
        
        i++; // Move to the next character
    }

    return 0;
}