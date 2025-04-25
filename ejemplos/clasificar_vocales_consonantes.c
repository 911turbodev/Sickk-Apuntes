#include <stdio.h>

int main()
{
    char letra;

    printf("Ingrese una letra: ");
    scanf(" %c", &letra);

    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z'))
    {
        // Es una letra
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
            printf("Es una vocal.\n");
        }
        else
        {
            printf("Es una consonante.\n");
        }
    }
    else
    {
        printf("No es una letra.\n");
    }

    return 0;
}
