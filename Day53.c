/* Write a Program to take an array of integers as input, calculate the pivot 
index of this array. The pivot index is the index where the sum of all the 
numbers strictly to the left of the index is equal to the sum of all the 
numbers strictly to the index's right. If the index is on the left edge of 
the array, then the left sum is 0 because there are no elements to the left. 
This also applies to the right edge of the array. Print the leftmost pivot 
index. If no such index exists, print -1.
*/

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    long long total_sum = 0;
    long long left_sum = 0;
    long long right_sum = 0;
    int pivot_index = -1; // -1 means "not found"

    // 1. Read the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate dimensions
    if (n > 100 || n <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // 2. Read elements and calculate the total sum
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total_sum += arr[i];
    }

    // 3. Find the pivot index
    // left_sum starts at 0 (for the check at index 0)
    for (i = 0; i < n; i++) {
        
        // Calculate the right_sum
        // right_sum = total_sum - left_sum - (current element)
        right_sum = total_sum - left_sum - arr[i];
        
        // Check if the sums are equal
        if (left_sum == right_sum) {
            pivot_index = i; // Found the pivot
            break;           // Stop searching (we need the leftmost)
        }
        
        // *After* the check, add the current element to the left_sum
        // to prepare for the *next* iteration.
        left_sum += arr[i];
    }

    // 4. Print the result
    printf("Pivot index: %d\n", pivot_index);

    return 0;
}