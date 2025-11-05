// Question 1: Write a program to convert temperature 
// from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    // We use 'float' for decimal numbers
    float celsius, fahrenheit;

    printf("--- Celsius to Fahrenheit Converter ---\n");
    printf("Enter temperature in Celsius: ");
    
    // Read the user's input as a float
    scanf("%f", &celsius);

    // The conversion formula
    // We use 9.0 and 5.0 to make sure the result is a float
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // "%.2f" prints the float with 2 decimal places
    printf("\n--- Result ---\n");
    printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}