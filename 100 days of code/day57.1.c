//Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], prev[n];

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        prev[i] = -1; // Initialize previous greater element as -1
    }

    // Brute-force approach
    for (i = 0; i < n; i++) {
        for (j = i - 1; j >= 0; j--) { // Look to the left
            if (arr[j] > arr[i]) {
                prev[i] = arr[j];
                break; // Stop at first greater element
            }
        }
    }

    // Print output in comma-separated format
    for (i = 0; i < n; i++) {
        if (i != 0) printf(", ");
        printf("%d", prev[i]);
    }
    printf("\n");

    return 0;
}
