/* Write a program to reverse an array without taking extra space. */
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int temp;

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

    // Perform in-place reverse
    // We only need to loop up to the middle of the array
    for (i = 0; i < n / 2; i++) {
        
        // 'i' is the index from the start
        // '(n - 1 - i)' is the corresponding index from the end
        
        // Swap elements
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\nReversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}