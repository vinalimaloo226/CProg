//Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10], transpose[10][10];
    int isSymmetric = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find transpose of matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Check if matrix equals its transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
