//Q85: Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, temp;

    printf("Enter a string: ");
    gets(str);  // Read the input string

    // Find length of string
    while (str[len] != '\0') {
        len++;
    }

    // Reverse the string in-place
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s\n", str);

    return 0;
}
