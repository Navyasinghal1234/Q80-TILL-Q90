//WAP TO COUNT CHARACTER IN STRING.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read string (including spaces if any)
    scanf("%[^\n]", str);

    // Count characters manually
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("%d", count);

    return 0;
}
