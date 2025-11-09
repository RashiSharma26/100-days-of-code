// Question: Write a program to calculate the area and perimeter of a rectangle
// given its length and breadth.

#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

    printf("Welcome to the Rectangle Calculator!\n");
    printf("Please enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Great! Now, please enter the breadth (or width): ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\n--- Thank you! Here are your results --- \n");
    printf("The area of your rectangle is: %d\n", area);
    printf("The perimeter of your rectangle is: %d\n", perimeter);

    return 0;
}