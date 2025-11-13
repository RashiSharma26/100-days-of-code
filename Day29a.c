/* Write a program to find the sum of array elements. */
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    long long sum = 0; // Use long long in case the sum is very large

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if n is too large for the declared array
    if (n > 100 || n <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1; // Exit with an error
    }

    // 2. Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Calculate the sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // 4. Print the sum
    printf("Sum of the array elements is: %lld\n", sum);

    return 0;
}