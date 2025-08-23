/* Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */
#include <stdio.h>

int main() {
    char op;
    double first, second;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &op);

    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", first, second, first + second);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", first, second, first - second);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", first, second, first * second);
            break;
        case '/':
            if (second != 0)
                printf("%.2lf / %.2lf = %.2lf", first, second, first / second);
            else
                printf("Error! Division by zero.");
            break;
        case '%':
            // Modulus operator works only on integers.
            if ((int)second != 0)
                printf("%d %% %d = %d", (int)first, (int)second, (int)first % (int)second);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! Operator is not correct");
    }

    return 0;
}