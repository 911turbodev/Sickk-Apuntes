#include <stdio.h>

int main()
{
    char c;

    printf("Ingrese un carácter: ");
    scanf(" %c", &c);

    if (c >= 'a' && c <= 'z')
    {
        printf("Es una letra minúscula.\n");
    }
    else
    {
        if (c >= 'A' && c <= 'Z')
        {
            printf("Es una letra mayúscula.\n");
        }
        else
        {
            printf("No es una letra.\n");
        }
    }

    return 0;
}
