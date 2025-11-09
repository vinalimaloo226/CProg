//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // If number has only one digit
    if (num < 10) {
        printf("Swapped number = %d\n", num);
        return 0;
    }

    last = num % 10;                     // Get last digit
    digits = (int)log10(num);            // Count digits - 1
    first = num / (int)pow(10, digits);  // Get first digit

    // Remove first and last digits, then swap
    swappedNum = last * (int)pow(10, digits) +
                 (num % (int)pow(10, digits)) / 10 * 10 +
                 first;

    printf("Swapped number = %d\n", swappedNum);
    return 0;
}
