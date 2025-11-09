//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // Use long long for large results
    int hasEven = 0;        // To check if there are even numbers

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    // Display result
    if (hasEven)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers in the range.\n");

    return 0;
}
