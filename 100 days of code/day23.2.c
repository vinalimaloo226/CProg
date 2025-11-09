//Q46: Write a program to print the following pattern
#include <stdio.h>

int main() {
    int i, j;

    // Print 5 rows
    for (i = 1; i <= 5; i++) {
        // Print 5 columns of '*'
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");  // Move to next line after each row
    }

    return 0;
}
