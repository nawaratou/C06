#include <stdio.h>

int main() {
    char str[200];
    int i = 0, vowels = 0, consonants = 0;

   
    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        char c = str[i];

        // Convertir en minuscule si majuscule
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }

        // Vérifie si c'est une lettre
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Voyelles : %d\n", vowels);
    printf("Consonnes : %d\n", consonants);

    return 0;
}
