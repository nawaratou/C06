#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int i, vc = 0, cc = 0;

    // Lecture d’une chaîne avec espaces :
    scanf("%49s", name);  // "%s" ne lit pas les espaces. Si tu veux une phrase entière : "%49[^\n]"

    for (i = 0; i < strlen(name); i++) {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U') {
            vc++;
        } else {
            cc++;
        }
    }

    printf("Voyelles : %d\n", vc);
    printf("Consonnes : %d\n", cc);

    return 0;
}
