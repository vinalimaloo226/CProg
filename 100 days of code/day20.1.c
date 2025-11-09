//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;  // Initialize product as 1
    int hasOdd = 0;   // Flag to check if any odd digit exists

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find product of odd digits
    while (num != 0) {
        digit = num % 10;      // Extract last digit
        if (digit % 2 != 0) {  // Check if odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;             // Remove last digit
    }

    // Display result
    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("Product of odd digits = 1 (no odd digits)\n");

    return 0;
}
