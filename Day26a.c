/* Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5;
    int num;

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= (rows - i); j++) {
            printf(" ");
        }
        
        num = rows - i + 1;
        
        for (k = 1; k <= i; k++) {
            printf("%d", num);
            num++;
        }
        
        printf("\n");
    }

    return 0;
}