//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // Use long long for large values

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (i = 1; i <= n; i++) {
            fact *= i;
        }

        // Display result
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}
