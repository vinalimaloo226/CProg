//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    int matrix[10][10];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    // Traverse from first column of each row (bottom-left to top-right diagonals)
    for (int k = 0; k < rows; k++) {
        i = k;
        j = 0;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    // Traverse from 2nd column to last column of top row
    for (int k = 1; k < cols; k++) {
        i = rows - 1;
        j = k;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}
