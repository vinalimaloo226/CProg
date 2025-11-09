//Q34: Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        printf("Not prime\n");
        return 0;
    }

    // Check divisibility from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Display result
    if (isPrime)
        printf("Prime\n");
    else
        printf("not prime\n");
        return 0;
}
