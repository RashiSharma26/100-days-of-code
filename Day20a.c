/* Write a program to find the product of odd digits of a number. */
#include <stdio.h>

int main() {
    long long n, originalNum;
    long long product = 1; // Initialize product to 1
    int remainder;
    int foundOddDigit = 0; // Flag to check if we found any odd digit

    printf("Enter an integer: ");
    scanf("%lld", &n);

    originalNum = n;

    // Use a temporary variable for calculations, preserving originalNum
    long long temp_n = n;
    
    // Handle 0
    if (temp_n == 0) {
        printf("The number is 0, which has no odd digits.\n");
        return 0;
    }

    // Handle negative numbers by working with the absolute value
    if (temp_n < 0) {
        temp_n = -temp_n;
    }

    while (temp_n != 0) {
        // Get the last digit
        remainder = temp_n % 10;

        // Check if the digit is odd
        if (remainder % 2 != 0) {
            product *= remainder;
            foundOddDigit = 1; // Set the flag
        }

        // Remove the last digit
        temp_n /= 10;
    }

    // Print the result based on whether an odd digit was found
    if (foundOddDigit == 1) {
        printf("Product of odd digits of %lld = %lld\n", originalNum, product);
    } else {
        printf("No odd digits were found in %lld.\n", originalNum);
    }

    return 0;
}