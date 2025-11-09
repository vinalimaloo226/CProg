//Q97: Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter a name: ");
    gets(name);

    // Print the first character as initial
    if (name[0] != ' ')
        printf("%c.", name[0]);

    // Loop through the string to find spaces
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ')
            printf("%c.", name[i+1]);
    }

    printf("\n");
    return 0;
}
