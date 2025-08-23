/* Write a program to count even and odd numbers in an array. */
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int even_count = 0;
    int odd_count = 0;

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
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Total even elements: %d\n", even_count);
    printf("Total odd elements: %d\n", odd_count);

    return 0;
}