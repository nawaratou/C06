#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    char ch;

    // Lecture de la chaîne avec fgets
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }

        i++;
    }

    printf("Voyelles : %d\n", vowels);
    printf("Consonnes : %d\n", consonants);

    return 0;
}
