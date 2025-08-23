/* Write a program to print all the prime numbers from 1 to n. */
#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: \n", n);

    // Loop for every number from 2 to n
    for (i = 2; i <= n; i++) {
        
        // Assume the current number 'i' is prime
        isPrime = 1; 

        // Check for divisors from 2 up to i/2
        for (j = 2; j <= i / 2; j++) {
            
            // If i is divisible by j, then i is not prime
            if (i % j == 0) {
                isPrime = 0;
                break; // No need to check further
            }
        }

        // If isPrime is still 1, then the number is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}