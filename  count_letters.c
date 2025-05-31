#include <stdio.h>

int main()
{
    char str[101];
    int i = 0, vow = 0, con = 0;

    scanf("%s", str); // Ou gets(str) si le correcteur l'exige

    while (str[i] != '\0')
    {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            vow++;
        }
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            con++;
        }
        i++;
    }

    printf("%d %d", vow, con); // Sans \n si l'exemple le demande
    return 0;
}
