/* Write a Program to take a sorted array(say nums[]) and an integer (say target) 
as inputs. The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and 
print the index of first and last occurrence. 
Print -1, -1 if the target is not present.
*/

#include <stdio.h>

/**
 * @brief Finds the first occurrence of a target in a sorted array.
 * @return The index of the first occurrence, or -1 if not found.
 */
int findFirstOccurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int result = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; 
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else { 
            high = mid - 1;
        }
    }
    
    return result;
}

/**
 * @brief Finds the last occurrence of a target in a sorted array.
 * @return The index of the last occurrence, or -1 if not found.
 */
int findLastOccurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int result = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; 
        } 
        else if (arr[mid] < target) {
            low = mid + 1;
        } 
        else { 
            high = mid - 1;
        }
    }
    
    return result;
}

int main() {
    int n, i, target;
    int arr[100];
    int first_index, last_index;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n > 100 || n <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements (in sorted order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &target);

    first_index = findFirstOccurrence(arr, n, target);
    last_index = findLastOccurrence(arr, n, target);

    printf("\nFirst and last occurrence indices: ");
    printf("%d,%d\n", first_index, last_index);

    return 0;
}