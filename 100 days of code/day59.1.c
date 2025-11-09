//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Subarray size k cannot be greater than array size\n");
        return 0;
    }

    int maxSum = 0;

    // Calculate sum of first window
    for (i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int windowSum = maxSum;

    // Slide the window
    for (i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d\n", maxSum);

    return 0;
}
