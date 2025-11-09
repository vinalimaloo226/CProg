//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, i, hcf;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find HCF
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF (GCD) = %d\n", hcf);
    return 0;
}
