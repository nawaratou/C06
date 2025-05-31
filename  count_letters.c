#include <stdio.h>
#include <ctype.h>  // pour isalpha()

int main()
{
    char str[101]; // Taille max 100 + 1 pour '\0'
    int i = 0, vow = 0, con = 0;

    fgets(str, sizeof(str), stdin); // Lecture sécurisée de la chaîne

    while (str[i] != '\0' && str[i] != '\n') // Ignorer le retour à la ligne
    {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vow++;
        }
        else if (isalpha(c)) // On compte comme consonne seulement si c'est une lettre
        {
            con++;
        }
        i++;
    }

    printf("%d %d\n", vow, con);
    return 0;
}
