/* Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths */
#include <stdio.h>

int main() {
    double s1, s2, s3;

    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &s1, &s2, &s3);

    // Check if the sides form a valid triangle
    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)) {
        if (s1 == s2 && s2 == s3) {
            printf("Equilateral Triangle");
        }
        else if (s1 == s2 || s1 == s3 || s2 == s3) {
            printf("Isosceles Triangle");
        }
        else {
            printf("Scalene Triangle");
        }
    }
    else {
        printf("The given sides do not form a valid triangle.");
    }

    return 0;
}