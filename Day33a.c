/* Write a program to search for an element in a sorted array using binary search. */
#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];
    int low, high, mid;
    int found_index = -1; // -1 indicates "not found"

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // Binary search requires the array to be sorted
    printf("Enter %d elements (in sorted order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    // --- Binary Search Logic ---
    
    // 1. Initialize the search boundaries
    low = 0;
    high = n - 1;

    // 2. Loop as long as the search space is valid
    while (low <= high) {
        
        // 3. Find the middle element
        mid = (low + high) / 2;

        // 4. Check if the middle element is the key
        if (arr[mid] == key) {
            found_index = mid; // Key found!
            break;             // Exit the loop
        }
        
        // 5. If key is greater, search in the right half
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        
        // 6. If key is smaller, search in the left half
        else { // arr[mid] > key
            high = mid - 1;
        }
    }

    // --- Print the result ---
    if (found_index != -1) {
        printf("Element %d found at index %d.\n", key, found_index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}