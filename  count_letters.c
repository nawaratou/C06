#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0, voyelles = 0, consonnes = 0;

    // Lire une ligne entière sans message
    scanf(" %[^\n]", str);

    // Balayage caractère par caractère
    while (str[i] != '\0') {
        char ch = str[i];

        if (isalpha(ch)) {  // Si c'est une lettre
            ch = tolower(ch);  // Ignorer la casse
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                voyelles++;
            else
                consonnes++;
        }
        i++;
    }

    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
