/* Write a program to read and print elements of a one-dimensional array. */
#include <stdio.h>

int main() {
    int n, i;
    int arr[100]; // Declare an array of a fixed size (e.g., 100)

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

    // 3. Print elements from the array
    printf("The elements of the array are: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}