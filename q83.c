//WAP  TO COUNT VOWELS AND CONSONANTS IN A STRING.
#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    // Read string
    scanf("%[^\n]", str);

    // Count vowels and consonants
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check alphabet only
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Convert to lowercase for easier checking
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
