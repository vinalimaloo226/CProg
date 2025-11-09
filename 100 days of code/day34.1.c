//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, pos, num;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position and element to insert: ");
    scanf("%d %d", &pos, &num);

    // Shift elements to the right from the given position
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element at given position
    arr[pos] = num;
    n++;  // increase array size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
