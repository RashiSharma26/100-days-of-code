// Question 3: Write a program to swap two numbers 
// without using a third variable.

#include <stdio.h>

int main() {
    int num1, num2;

    printf("--- Number Swapper (No Temp Variable) ---\n");
    
    printf("Enter the first number (num1): ");
    scanf("%d", &num1);
    
    printf("Enter the second number (num2): ");
    scanf("%d", &num2);

    printf("\n--- Before Swapping ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // This is the swap logic using arithmetic
    // Let's say num1 = 10 and num2 = 5
    
    // 1. num1 becomes the sum
    num1 = num1 + num2;  // num1 is now 15 (10 + 5)
    
    // 2. num2 becomes the original num1
    num2 = num1 - num2;  // num2 is now 10 (15 - 5)
    
    // 3. num1 becomes the original num2
    num1 = num1 - num2;  // num1 is now 5 (15 - 10)
    
    // Swap complete!

    printf("\n--- After Swapping ---\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}