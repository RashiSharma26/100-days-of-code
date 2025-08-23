/* Write a Program to take a positive integer n as input, and find the 
pivot integer x such that the sum of all elements between 1 and x 
inclusively equals the sum of all elements between x and n inclusively. 
Print the pivot integer x. If no such integer exists, print -1.
*/

#include <stdio.h>

int main() {
    int n, x;
    long long total_sum = 0;
    long long left_sum = 0;
    long long right_sum = 0;
    int pivot_found = -1; // -1 means "not found"

    // 1. Read the input n
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Input must be positive.\n");
        return 1;
    }

    // 2. Calculate the total sum from 1 to n
    // Formula: sum = n * (n + 1) / 2
    total_sum = (long long)n * (n + 1) / 2;

    // 3. Iterate x from 1 to n to find the pivot
    for (x = 1; x <= n; x++) {
        
        // 4. Update the left_sum (sum from 1 to x)
        left_sum += x;
        
        // 5. Calculate the right_sum (sum from x to n)
        // This is total_sum - sum(1 to x-1)
        // And sum(1 to x-1) is (left_sum - x)
        right_sum = total_sum - (left_sum - x);

        // 6. Check for the pivot condition
        if (left_sum == right_sum) {
            pivot_found = x; // Found the pivot
            break;           // Stop searching (guaranteed at most one)
        }
    }
    
    // 7. Print the result
    printf("Pivot integer: %d\n", pivot_found);

    return 0;
}