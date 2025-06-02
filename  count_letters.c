#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int vowels = 0;
    int consonants = 0;

    // Demande à l'utilisateur d'entrer une chaîne
    
    scanf("%99s", str);  // %99s pour éviter le débordement (lire max 99 caractères)

    // Parcours chaque caractère jusqu'à la fin de la chaîne
    while (str[i] != '\0')
    {
        // Vérifie si c'est une lettre alphabétique
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            // Vérifie si c'est une voyelle (minuscule ou majuscule)
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {!
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }

    // Affiche les résultats
    printf("Voyelles : %d\n", vowels);
    printf("Consonnes : %d\n", consonants);

    return 0;
}
