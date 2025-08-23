/* Write a program to find the HCF (GCD) of two numbers. */
#include <stdio.h>

int main() {
    int n1, n2, temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // Ensure n1 is greater than n2 for the loop, or handle 0
    if (n2 > n1) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    // Store original numbers for output
    int orig_n1 = n1;
    int orig_n2 = n2;

    // Euclidean algorithm
    while (n2 != 0) {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    printf("HCF of %d and %d is %d\n", orig_n1, orig_n2, n1);

    return 0;
}