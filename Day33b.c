/* Write a program to insert an element in a sorted array at the appropriate position. */
#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int insert_pos = 0;

    printf("Enter the number of elements (max 99): ");
    scanf("%d", &n);

    if (n >= 100 || n <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 99.\n");
        return 1;
    }

    printf("Enter %d elements (in sorted order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // --- 1. Find the correct insertion position ---
    // We loop until we find an element greater than the key,
    // or we reach the end of the array.
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            insert_pos = i;
            break; // Found the position
        }
    }
    
    // If the loop finished without breaking, the key is the largest
    // and should be placed at the end (position 'n')
    if (i == n) {
        insert_pos = n;
    }

    // --- 2. Shift elements to the right ---
    // We start from the end of the array and move elements one
    // step to the right, stopping at the 'insert_pos'.
    // e.g., if n=5, pos=2. Loop i=5, i=4, i=3.
    for (i = n; i > insert_pos; i--) {
        arr[i] = arr[i - 1];
    }

    // --- 3. Insert the key at the correct position ---
    arr[insert_pos] = key;

    // --- 4. Increment the size of the array ---
    n++;

    // --- 5. Print the new array ---
    printf("\nArray after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}