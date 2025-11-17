//WAP TO CONVERT LOWERCASE STRING TO UPPERCASE WITHOUT USING BUILT IN FUNCTIONS.
#include <stdio.h>

int main() {
    char str[100];

    // Read string
    scanf("%[^\n]", str);

    // Convert each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase
        }
    }

    // Print result
    printf("%s", str);

    return 0;
}
