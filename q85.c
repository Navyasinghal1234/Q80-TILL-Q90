//WAP TO REVERSE A STRING.
#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    // Read string
    scanf("%[^\n]", str);

    // Find length manually
    while (str[len] != '\0') {
        len++;
    }

    // Reverse print
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
