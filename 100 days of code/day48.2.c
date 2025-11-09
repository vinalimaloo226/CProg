//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);

    char *word_start = NULL;
    char *temp = str;

    while (*temp) {
        if ((word_start == NULL) && (*temp != ' '))
            word_start = temp;
        if (word_start && ((*(temp + 1) == ' ') || (*(temp + 1) == '\0'))) {
            reverseWord(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }

    printf("Output:\n%s\n", str);
    return 0;
}
