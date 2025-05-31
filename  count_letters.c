#include <stdio.h>
#include <ctype.h> // Pour isalpha() et tolower()

int main()
{
    char str[101];
    int vow = 0, con = 0, i = 0;

    // Lire toute la ligne, y compris les espaces
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (isalpha(str[i])) // Vérifie que c'est une lettre (ignore les ponctuations, etc.)
        {
            char lower = tolower(str[i]);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vow++;
            else
                con++;
        }
        i++;
    }

    printf("Voyelles : %d\n", vow);
    printf("Consonnes : %d\n", con);

    return 0;
}
