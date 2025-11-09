//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter a full name: ");
    gets(name);

    // Find the index of the last space (before surname)
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    // Print initials of all names before the surname
    if (lastSpace != -1) {
        for (i = 0; i < lastSpace; i++) {
            if (i == 0 && name[i] != ' ')
                printf("%c.", name[i]);
            else if (name[i] == ' ' && name[i+1] != ' ')
                printf("%c.", name[i+1]);
        }
        printf(" ");  // space before surname
        // Print surname
        for (i = lastSpace + 1; name[i] != '\0'; i++) {
            printf("%c", name[i]);
        }
    } else {
        // Only one name, print as it is
        printf("%s", name);
    }

    printf("\n");
    return 0;
}