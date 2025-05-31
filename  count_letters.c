#include <stdio.h>
#include <ctype.h> // pour tolower() et isalpha()

int main() {
    char str[1000];
    int voyelles = 0, consonnes = 0;

    fgets(str, sizeof(str), stdin); // lire la chaîne avec espaces

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);

        if (isalpha(c)) {
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
