//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle zero separately
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[i] = num % 2;  // Store remainder (0 or 1)
        num /= 2;             // Divide by 2
        i++;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
