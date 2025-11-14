/* Write a program to delete an element from an array at a given position. */
#include <stdio.h>

int main() {
    int n, i, pos;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Ask for a 1-based position
    printf("\nEnter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    // --- Validate the position ---
    if (pos < 1 || pos > n) {
        printf("Invalid position! Position must be between 1 and %d.\n", n);
        return 1;
    }

    // --- Convert 1-based position to 0-based index ---
    int index = pos - 1;

    // --- 1. Shift elements to the left ---
    // Start from the deletion index and copy the *next* element
    // e.g., n=5, pos=3 (index=2)
    // i=2: arr[2] = arr[3]
    // i=3: arr[3] = arr[4]
    // Loop stops because i < n-1 (i.e., 3 < 4)
    for (i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // --- 2. Decrement the size of the array ---
    n--;

    // --- 3. Print the new array ---
    printf("\nArray after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}