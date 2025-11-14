/* Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is 
greater than or equal to x and print it. This element is called the ceil of x. 
If such an element does not exist, print -1. 
Note: In case of multiple occurrences of ceil of x, 
return the index of the first occurrence.
*/

#include <stdio.h>

/**
 * @brief Finds the ceil of x in a sorted array.
 * @return The index of the smallest element >= x, or -1 if not found.
 */
int findCeilIndex(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int result = -1; // -1 means "not found yet"

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids potential overflow

        if (arr[mid] >= x) {
            // This element is a potential answer.
            // We store its index.
            result = mid;
            
            // We need the *smallest* element (first occurrence),
            // so we continue searching in the left half
            // to see if a smaller, valid element (or earlier index) exists.
            high = mid - 1;
        } 
        else { // arr[mid] < x
            // The element at mid is too small.
            // The ceil must be in the right half.
            low = mid + 1;
        }
    }
    
    return result;
}

int main() {
    int n, i, x;
    int arr[100];
    int ceil_index;

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    // 2. Read elements into the array
    printf("Enter %d elements (in sorted order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the target value x
    printf("Enter the target value (x): ");
    scanf("%d", &x);

    // 4. Find the ceil index
    ceil_index = findCeilIndex(arr, n, x);

    // 5. Print the result
    printf("Index of ceil: %d\n", ceil_index);

    return 0;
}