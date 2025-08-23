/* Write a program to check if a number is a strong number. */
#include <stdio.h>

int main() {
    int n, originalNum, temp_n, digit;
    int sum = 0;
    int i, fact;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNum = n;
    temp_n = n;

    // Use a do-while loop to ensure it runs at least once (for input 0)
    do {
        // Get the last digit
        digit = temp_n % 10;

        // Calculate the factorial of the digit
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        // Add the factorial to the sum
        sum += fact;

        // Remove the last digit
        temp_n /= 10;
        
    } while (temp_n > 0);

    // Check if the sum of factorials equals the original number
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}