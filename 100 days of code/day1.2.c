//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    float num1, num2;  // using float to handle decimal values
    float sum, diff, product, quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform calculations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0)
        quotient = num1 / num2;
    else {
        printf("Error: Division by zero is not allowed.\n");
        return 1; // exit program
    }

    // Display results
    printf("\nResults:\n");
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}
