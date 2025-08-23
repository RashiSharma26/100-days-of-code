/* Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms. */
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator, denominator;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Loop from the first term (i=1) up to n
    for (i = 1; i <= n; i++) {
        
        // Special case for the first term, which is 1
        if (i == 1) {
            sum += 1.0;
        } 
        // For all other terms
        else {
            // Numerator is 3, 5, 7... -> (2*i - 1)
            numerator = (double)(2 * i - 1);
            
            // Denominator is 4, 6, 8... -> (2*i)
            denominator = (double)(2 * i);
            
            sum += numerator / denominator;
        }
    }

    // Print the sum, formatted to 2 decimal places
    printf("Sum of the series up to %d terms is: %.2f\n", n, sum);

    return 0;
}