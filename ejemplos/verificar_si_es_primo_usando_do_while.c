#include <stdio.h>

int main()
{
    int numero, i = 2, esPrimo = 1;

    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    if (numero <= 1)
    {
        printf("%d no es un número primo.\n", numero);
        return 0;
    }

    do
    {
        if (numero % i == 0)
        {
            esPrimo = 0;
            break;
        }
        i++;
    } while (i <= numero / 2);

    if (esPrimo)
    {
        printf("%d es un número primo.\n", numero);
    }
    else
    {
        printf("%d no es un número primo.\n", numero);
    }

    return 0;
}
