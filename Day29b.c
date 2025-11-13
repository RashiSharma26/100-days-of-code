/* Write a program to find the maximum and minimum element in an array. */
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if n is valid
    if (n > 100 || n <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1; // Exit with an error
    }

    // 2. Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Initialize max and min to the first element
    max = arr[0];
    min = arr[0];

    // 4. Find the max and min
    // Loop from the second element (index 1)
    for (i = 1; i < n; i++) {
        
        // If current element is greater than max, update max
        if (arr[i] > max) {
            max = arr[i];
        }
        
        // If current element is less than min, update min
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // 5. Print the results
    printf("Maximum element in the array is: %d\n", max);
    printf("Minimum element in the array is: %d\n", min);

    return 0;
}