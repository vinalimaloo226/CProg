//Q69: Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int first, second;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("Second largest element does not exist.\n");
        return 0;
    }

    first = second = -99999; // assuming array contains positive numbers

    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
        if (second == -99999)
        printf("no second largest element.\n");
        elseprintf("second largest element = %d\n", second);

        return 0;
}