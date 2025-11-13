/* Write a program to find the 1’s complement of a binary number and print it. */
#include <stdio.h>

int main() {
    char binary_str[100];
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary_str);

    // Loop until the end of the string (null terminator)
    while (binary_str[i] != '\0') {
        
        // Flip '1' to '0'
        if (binary_str[i] == '1') {
            binary_str[i] = '0';
        } 
        // Flip '0' to '1'
        else if (binary_str[i] == '0') {
            binary_str[i] = '1';
        }
        
        // We assume the input contains only '0' and '1'
        
        i++; // Move to the next character
    }

    printf("1's Complement: %s\n", binary_str);

    return 0;
}