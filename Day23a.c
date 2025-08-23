/* Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. */
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Loop from the first term (i=1) up to n
    for (i = 1; i <= n; i++) {
        
        // Numerator is 2, 4, 6, 8... -> (2 * i)
        numerator = (double)(2 * i);
        
        // Denominator is 3, 7, 11, 15... -> (4 * i - 1)
        denominator = (double)(4 * i - 1);
        
        // Add the result of the division to the sum
        sum += numerator / denominator;
    }

    /* Note: The outputs calculated by this formula differ from the examples provided.
       For n=3, sum = (2/3) + (4/7) + (6/11) ≈ 0.67 + 0.57 + 0.55 ≈ 1.78
       For n=5, sum ≈ 1.78 + (8/15) + (10/19) ≈ 1.78 + 0.53 + 0.53 ≈ 2.84
       This program correctly implements the series as written (2/3 + 4/7 + ...).
    */

    // Print the sum, formatted to 2 decimal places
    printf("Sum of the series up to %d terms is: %.2f\n", n, sum);

    return 0;
}