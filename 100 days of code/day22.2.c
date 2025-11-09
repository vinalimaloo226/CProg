//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0; 
    int numerator = 1, denominator = 2;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate series sum
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;   // odd numbers: 1, 3, 5, 7, ...
        denominator += 2; // even numbers: 2, 4, 6, 8, ...
    }

    // Display result
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
