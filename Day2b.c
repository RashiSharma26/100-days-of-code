// Question 2: Write a program to calculate the area and circumference 
// of a circle given its radius.

#include <stdio.h>

int main() {
    // We use 'float' for numbers that can have decimal points.
    float radius, area, circumference;
    
    // We can define the value of Pi as a constant.
    // 3.14159 is precise enough for this problem.
    float pi = 3.14159;

    printf("--- Circle Calculator ---\n");
    printf("Enter the radius of the circle: ");
    
    // Use %f to read a float number
    scanf("%f", &radius);

    // Area formula: PI * radius * radius
    area = pi * radius * radius;
    
    // Circumference formula: 2 * PI * radius
    circumference = 2 * pi * radius;

    // "%.2f" means "print the float number with 2 decimal places"
    printf("\n--- Here are your results --- \n");
    printf("The Area of your circle is: %.2f\n", area);
    printf("The Circumference of your circle is: %.2f\n", circumference);

    return 0;
}