//WAP TO CHECK IF A STRING IS A PALINDROME.
#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    // Read string
    scanf("%[^\n]", str);

    // Find length
    while (str[len] != '\0') {
        len++;
    }

    // Check palindrome
    int i = 0, j = len - 1;

    while (i < j) {
        if (str[i] != str[j
