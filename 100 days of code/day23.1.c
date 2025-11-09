//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 2, denominator = 3;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate sum of series
    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;      // numerator increases by 2: 2, 4, 6, 8, ...
        denominator += 4;    // denominator increases by 4: 3, 7, 11, 15, ...
    }

    // Display result
    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
