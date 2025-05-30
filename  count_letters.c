#include <stdio.h>

int main() {
    char str[100];
    int voyelles = 0, consonnes = 0;
    int i = 0;
    char ch;

    // Lecture de la chaîne (avec espaces)
    scanf("%99[^\n]", str);

    // Parcours caractère par caractère
    while (str[i] != '\0') {
        ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                voyelles++;
            } else {
                consonnes++;
            }
        }

        i++;
    }

    // Affichage demandé
    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
