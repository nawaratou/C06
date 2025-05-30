// reverse_string.c
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    fgets(str, sizeof(str), stdin); // lire toute la ligne (espaces compris)

    // Calculer la longueur manuellement
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Chaîne inversée : ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
