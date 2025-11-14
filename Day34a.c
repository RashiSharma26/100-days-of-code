/* Write a program to insert an element in an array at a given position. */
#include <stdio.h>

int main() {
    int n, i, key, pos;
    int arr[100];

    printf("Enter the number of elements (max 99): ");
    scanf("%d", &n);

    if (n >= 100 || n <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 99.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to insert: ");
    scanf("%d", &key);

    // Ask for a 1-based position
    printf("Enter the position to insert at (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // --- Validate the position ---
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Position must be between 1 and %d.\n", n + 1);
        return 1;
    }

    // --- Convert 1-based position to 0-based index ---
    int index = pos - 1;

    // --- 1. Shift elements to the right ---
    // Start from the end (n) and move elements to the right
    // Stop when we reach the 'index' we want to insert at
    // e.g., n=5, pos=3 (index=2)
    // i=5: arr[5] = arr[4]
    // i=4: arr[4] = arr[3]
    // i=3: arr[3] = arr[2]
    // Loop stops
    for (i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // --- 2. Insert the key at the correct index ---
    arr[index] = key;

    // --- 3. Increment the size of the array ---
    n++;

    // --- 4. Print the new array ---
    printf("\nArray after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}