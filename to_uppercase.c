#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf(" %[^\n]", str);

    while (str[i] != '\0') {
        // si c'est une lettre minuscule, on la convertit
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("%s\n", str);
    return 0;
}
