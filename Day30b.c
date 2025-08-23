/* Write a program to count positive, negative, and zero elements in an array. */
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

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

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        }
        else if (arr[i] < 0) {
            negative_count++;
        }
        else {
            zero_count++;
        }
    }

    printf("Total positive elements: %d\n", positive_count);
    printf("Total negative elements: %d\n", negative_count);
    printf("Total zero elements: %d\n", zero_count);

    return 0;
}