/* Write a program to check if a number is an Armstrong number */
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    long long result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    /* Store the number of digits in n */
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        /* Calculate power manually to avoid floating point issues with pow() */
        long long power_val = 1;
        for(int i=0; i<n; i++) {
            power_val *= remainder;
        }
        
        result += power_val;
        originalNum /= 10;
    }

    if ((long long)num == result)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}