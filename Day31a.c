/* Write a program to search for an element in an array using linear search. */
#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int found_index = -1; // -1 indicates "not found"

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

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found_index = i; // Store the index where the element was found
            break;           // Stop searching once found
        }
    }

    // Print the result
    if (found_index != -1) {
        printf("Element %d found at index %d.\n", key, found_index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}