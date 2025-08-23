/* Write a program to find the sum of digits of a number. */
#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Store the original number for display
    int originalNum = n;

    // Loop until n becomes 0
    while (n != 0) {
        // Get the last digit
        remainder = n % 10;
        
        // Add the last digit to sum
        sum += remainder;
        
        // Remove the last digit from n
        n /= 10;
    }

    printf("Sum of digits of %d = %d\n", originalNum, sum);

    return 0;
}