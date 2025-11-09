//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0}, i, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    // Find the digit with maximum frequency
    for (i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit that occurs most: %d\n", maxDigit);

    return 0;
}
