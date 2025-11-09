//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, k, flag = 1;
    int matrix[10][10];
    int diagonal[10];

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Store diagonal elements in an array
    for (i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    // Check for distinctness
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                flag = 0;  // not distinct
                break;
            }
        }
    }

    if (flag)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
