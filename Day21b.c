/* Write a program to check if a number is a perfect number. */
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0, 1, and negative numbers are not perfect.
    if (n <= 1) {
        printf("%d is not a perfect number.\n", n);
        return 0;
    }

    // Find the sum of proper divisors
    // We only need to check up to n/2
    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors equals the number
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}