/* Write a program to print all factors of a given number. */
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);

    // Loop from 1 up to the number n
    for (i = 1; i <= n; ++i) {
        
        // If n is perfectly divisible by i, then i is a factor
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}