//Q27: Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // i-th odd number = 2*i - 1
    }

    // Display result
    printf("Sum of the first %d odd numbers = %d\n", n, sum);

    return 0;
}
