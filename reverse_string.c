#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

   
    scanf(" %[^\n]", str);  // ✔️ format valide // lit une ligne entière avec espaces

    // Calcul de la longueur manuellement
    while (str[length] != '\0') {
        length++;
    }

    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
