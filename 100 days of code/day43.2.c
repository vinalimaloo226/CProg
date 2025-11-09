//Q86: Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 0;

    printf("Enter a string: ");
    gets(str);  // read input string

    // Find length of string
    while (str[len] != '\0') {
        len++;
    }

    // Check palindrome by comparing characters from both ends
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 1; // not palindrome
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
