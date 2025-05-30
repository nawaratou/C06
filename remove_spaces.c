#include <stdio.h>

int main() {
    char str[200], clean[200];
    int i = 0, j = 0;

   
    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            clean[j] = str[i];
            j++;
        }
        i++;
    }
    clean[j] = '\0'; // fin de chaîne

    printf("%s\n", clean);
    return 0;
}
