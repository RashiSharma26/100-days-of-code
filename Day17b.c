/* Write a program to check if a number is prime. */
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check for divisors from 2 up to n/2
        for (i = 2; i <= n / 2; ++i) {
            
            // If n is divisible by i, then n is not prime
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}