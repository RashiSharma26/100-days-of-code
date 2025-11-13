/* Write a program to swap the first and last digit of a number */
#include <stdio.h>
#include <math.h>

int main() {
    int n, originalNum, lastDigit, firstDigit, digits, power, middle, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &n);

    originalNum = n;

    // Handle single-digit numbers
    if (n < 10) {
        swappedNum = n;
    } 
    else {
        // 1. Get the last digit
        lastDigit = n % 10;

        // 2. Find the total number of digits - 1
        // e.g., for 12345, log10(12345) = 4.09... (int)4
        digits = (int)log10(n);

        // 3. Calculate the power of 10 for the first digit
        // e.g., pow(10, 4) = 10000
        power = (int)pow(10, digits);

        // 4. Get the first digit
        // e.g., 12345 / 10000 = 1
        firstDigit = n / power;

        // 5. Get the middle digits
        // e.g., 12345 % 10000 = 2345 (removes first digit)
        //       2345 / 10 = 234 (removes last digit)
        middle = (n % power) / 10;

        // 6. Construct the new number
        // e.g., (5 * 10000) + (234 * 10) + 1
        //       50000 + 2340 + 1 = 52341
        swappedNum = (lastDigit * power) + (middle * 10) + firstDigit;
    }

    printf("Original number: %d\n", originalNum);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}