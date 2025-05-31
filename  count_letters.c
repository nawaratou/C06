#include <stdio.h>
#include <string.h>

int main() {
    char str[101];  // Taille max 100 + \0
    int vowels = 0;
    int consonants = 0;

    // On lit une ligne complète, y compris les espaces
    fgets(str, sizeof(str), stdin);

    // Retirer le saut de ligne ajouté par fgets (si présent)
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Parcourir chaque caractère de la chaîne
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        // Vérifier si c'est une lettre alphabétique
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            // Vérifier si c'est une voyelle (minuscule ou majuscule)
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Voyelles : %d\nConsonnes : %d\n", vowels, consonants);

    return 0;
}
