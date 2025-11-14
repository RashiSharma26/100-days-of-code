/* Write a program to merge two arrays. */
#include <stdio.h>

int main() {
    int n1, n2, total_size;
    int arr1[100], arr2[100], merged_arr[200];
    int i, j;

    // --- Input for First Array ---
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    if (n1 > 100 || n1 <= 0) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // --- Input for Second Array ---
    printf("\nEnter the number of elements in the second array: ");
    scanf("%d", &n2);

    if (n2 > 100 || n2 <= 0) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // --- Merging Process ---
    total_size = n1 + n2;

    // 1. Copy elements from the first array
    for (i = 0; i < n1; i++) {
        merged_arr[i] = arr1[i];
    }

    // 2. Copy elements from the second array
    //    We use 'j' to iterate through arr2 (0 to n2-1)
    //    We use 'i' to place them in merged_arr (n1 to total_size-1)
    for (j = 0, i = n1; j < n2; j++, i++) {
        merged_arr[i] = arr2[j];
    }

    // --- Print the Merged Array ---
    printf("\nMerged array: ");
    for (i = 0; i < total_size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}