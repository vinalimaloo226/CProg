//Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i;
    int arr[100], temp[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    // Adjust k if it's larger than n
    k = k % n;

    // Copy last k elements to temp array
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements to the right
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy back the k elements to the beginning
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
