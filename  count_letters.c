#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int i, vc=0, cc=0;

    scanf("%s", name);
    for ( i = 0; i < strlen(name); i++)
    return 0;
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U') 
            vc=vc+1;
         else
            cc=cc+1;
        }
    printf("\n Voyelles : %d", vc);
    printf("\n Consonnes : %d", cc);
    return 0;
    }
    
