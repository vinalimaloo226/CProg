//Q82: Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str); // Read the input string

    while (str[i] != '\0') {  // Loop until end of string
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
