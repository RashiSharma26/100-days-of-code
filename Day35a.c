/* Write a program to find the second largest element in an array. */
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int largest, second_largest;

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // --- Validate the size ---
    if (n > 100 || n <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1;
    }
    
    // The concept of "second largest" requires at least two numbers.
    if (n < 2) {
        printf("Error: Need at least two elements to find the second largest.\n");
        return 1;
    }

    // 2. Read elements into the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // --- 3. Initialize largest and second_largest ---
    // Compare the first two elements to set initial values
    if (arr[0] > arr[1]) {
        largest = arr[0];
        second_largest = arr[1];
    } else {
        largest = arr[1];
        second_largest = arr[0];
    }

    // --- 4. Find the largest and second largest ---
    // Loop from the third element (index 2)
    for (i = 2; i < n; i++) {
        
        // Case 1: If the current element is greater than the largest
        if (arr[i] > largest) {
            // The old 'largest' becomes the new 'second_largest'
            second_largest = largest;
            // The current element is the new 'largest'
            largest = arr[i];
        } 
        
        // Case 2: If the current element is between largest and second_largest
        // (i.e., smaller than largest, but greater than second_largest)
        else if (arr[i] > second_largest) {
            // The current element is the new 'second_largest'
            second_largest = arr[i];
        }
    }

    // --- 5. Print the result ---
    printf("\nThe largest element is: %d\n", largest);
    printf("The second largest element is: %d\n", second_largest);

    return 0;
}