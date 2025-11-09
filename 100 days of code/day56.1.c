//Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element i
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], next[n];

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        next[i] = -1;  // Initialize next greater element as -1
    }

    // Brute-force approach
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next[i] = arr[j];
                break;  // Stop at the first greater element
            }
        }
    }

    // Print output in comma separated format
    for (i = 0; i < n; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", next[i]);
    }
    printf("\n");

    return 0;
}
