// Question 2: Write a program to swap two numbers 
// using a third variable.

#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("--- Number Swapper ---\n");
    
    printf("Enter the first number (num1): ");
    scanf("%d", &num1);
    
    printf("Enter the second number (num2): ");
    scanf("%d", &num2);

    // \n adds a blank line for cleaner output
    printf("\n--- Before Swapping ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // This is the swap logic
    // 1. Store the value of num1 in a safe place
    temp = num1;
    
    // 2. Put num2's value into num1 (overwriting it)
    num1 = num2;
    
    // 3. Put the original value of num1 (from temp) into num2
    num2 = temp;

    printf("\n--- After Swapping ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}