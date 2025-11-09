//Q48: Write a program to print the following pattern:
#include <stdio.h>

int main() {
    int i, j;

    // Loop for 5 rows
    for (i = 1; i <= 5; i++) {
        // Print numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");  // Move to next line after each row
    }

    return 0;
}


