//Q100: Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    printf("All substrings are:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            // Print substring from index i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf(",");  // Separate substrings by comma
        }
    }

    printf("\n");
    return 0;
}
