//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find the greater of the two numbers
    max = (a > b) ? a : b;

    // Find LCM
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
