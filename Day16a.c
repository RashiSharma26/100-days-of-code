/* Write a program to take a number as input and print its equivalent binary representation */
#include <stdio.h>

int main() {
    int n;
    int binaryNum[32];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0");
    } else {
        while (n > 0) {
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }

        printf("Binary: ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", binaryNum[j]);
    }

    return 0;
}