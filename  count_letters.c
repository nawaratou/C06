#include <stdio.h>

int main() {
    char str[1000];
    int voyelles = 0, consonnes = 0;

    fgets(str, sizeof(str), stdin); // lecture avec espaces

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        // Mettre les majuscules en minuscules manuellement
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        // Vérifie si c'est une lettre
        if ((c >= 'a') && (c <= 'z')) {
            // Voyelles
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
    }

    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
