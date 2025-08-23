/* Write a program to find the digit that occurs the most times in an integer number. */
#include <stdio.h>

int main() {
    long long n;
    int digit_counts[10] = {0}; // Initialize all counts to 0
    int i, digit;
    int max_count = 0;
    int most_frequent_digit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // --- Handle edge case: Input is 0 ---
    if (n == 0) {
        printf("The most frequent digit is: 0\n");
        return 0;
    }

    // --- Handle negative numbers ---
    // Work with the absolute value
    if (n < 0) {
        n = -n;
    }

    // --- Count the occurrences of each digit ---
    long long temp_n = n; // Use a temporary variable for the loop
    while (temp_n != 0) {
        // Get the last digit
        digit = temp_n % 10;
        
        // Increment the counter for that specific digit
        digit_counts[digit]++;
        
        // Remove the last digit from the number
        temp_n /= 10;
    }

    // --- Find the digit with the maximum count ---
    // We check all 10 counters (from 0 to 9)
    for (i = 0; i < 10; i++) {
        
        // If the count for this digit is greater than the max_count we've seen
        if (digit_counts[i] > max_count) {
            
            // Update the max_count
            max_count = digit_counts[i];
            
            // Store this digit 'i' as the most frequent one
            most_frequent_digit = i;
        }
    }

    // --- Print the result ---
    printf("The most frequent digit in %lld is: %d\n", n, most_frequent_digit);
    printf("(It appeared %d times)\n", max_count);

    return 0;
}