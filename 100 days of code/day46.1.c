//Q91: Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    gets(str);  // Read input string

    while (str[i] != '\0') {
        char ch = str[i];

        // Check if not a vowel
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j] = ch;  // Keep non-vowel characters
            j++;
        }
        i++;
    }

    result[j] = '\0';  // End the new string

    printf("%s\n", result);

    return 0;
}
