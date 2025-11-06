//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, temp;
    // input two numbers
    printf("enter first numbers: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);
    //display values before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    //swapping using a temprory variable
    temp = a;
    a = b;
    b = temp;
    // display values after swapping
    printf("After swapping: a = %d, b = %d\n", a,b);

    return 0;
}