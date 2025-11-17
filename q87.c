//WAP TO COUNT DIGITS, AND SPECIAL CHARCATER IN A STRING.
#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0;

    // Read full string (including spaces)
    scanf("%[^\n]", str);

    // Traverse the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Alphabet → ignore
        }
        else {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}
