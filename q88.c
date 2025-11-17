//WAP TO REPLACE SPACES WITH HYPENS IN A STRING.
#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // read full line including spaces

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';   // replace space with hyphen
        }
    }

    printf("Output: %s", str);

    return 0;
}
