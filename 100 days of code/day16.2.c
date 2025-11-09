//Q32: Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;               // Get last digit
        reversed = reversed * 10 + remainder; // Build reversed number
        num /= 10;                          // Remove last digit
    }

    // Check palindrome condition
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
