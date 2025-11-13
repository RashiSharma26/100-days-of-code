/* Write a program to find the LCM of two numbers. */
#include <stdio.h>

int main() {
    int n1, n2, hcf, temp;
    long long lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // Store original numbers
    int orig_n1 = n1;
    int orig_n2 = n2;

    // --- Find HCF (Euclidean Algorithm) ---
    
    // Ensure n1 is greater than n2 for the loop
    if (n2 > n1) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    
    while (n2 != 0) {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    
    hcf = n1; // n1 contains the HCF at the end

    // --- Calculate LCM ---
    // LCM = (n1 * n2) / HCF
    // Use long long to avoid overflow in (orig_n1 * orig_n2)
    lcm = ((long long)orig_n1 * orig_n2) / hcf;

    printf("HCF of %d and %d is %d\n", orig_n1, orig_n2, hcf);
    printf("LCM of %d and %d is %lld\n", orig_n1, orig_n2, lcm);

    return 0;
}