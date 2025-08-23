/* Write a program to find profit or loss percentage given cost price and selling price. */
#include <stdio.h>

int main() {
    float cp, sp, amount, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        amount = sp - cp;
        percentage = (amount / cp) * 100;
        printf("Profit Amount: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%", percentage);
    }
    else if (cp > sp) {
        amount = cp - sp;
        percentage = (amount / cp) * 100;
        printf("Loss Amount: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%", percentage);
    }
    else {
        printf("No Profit, No Loss.");
    }

    return 0;
}